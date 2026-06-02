import time
import pandas as pd
from selenium import webdriver
from selenium.webdriver.common.by import By
from selenium.webdriver.chrome.service import Service as ChromeService
from selenium.webdriver.chrome.options import Options as ChromeOptions
from selenium.webdriver.edge.service import Service as EdgeService
from selenium.webdriver.edge.options import Options as EdgeOptions
from selenium.webdriver.firefox.service import Service as FirefoxService
from selenium.webdriver.firefox.options import Options as FirefoxOptions
from webdriver_manager.chrome import ChromeDriverManager
from webdriver_manager.microsoft import EdgeChromiumDriverManager
from webdriver_manager.firefox import GeckoDriverManager
from bs4 import BeautifulSoup

def setup_driver():
    """
    Sets up a Selenium driver. Relies on Selenium's built-in manager (Selenium 4.6+) first.
    """
    
    # 1. Try Microsoft Edge (Built-in Manager)
    try:
        print("Attempting to launch Microsoft Edge...")
        edge_options = EdgeOptions()
        edge_options.add_argument("user-agent=Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/120.0.0.0 Safari/537.36")
        # Try without service arg (uses Selenium Manager)
        driver = webdriver.Edge(options=edge_options)
        print("Successfully launched Edge.")
        return driver
    except Exception as e:
        print(f"Could not launch Edge (Automatic): {e}")

    # 2. Try Microsoft Edge (Explicit Webdriver Manager - Fallback)
    try:
        print("Attempting to launch Microsoft Edge (with Webdriver Manager)...")
        edge_options = EdgeOptions()
        edge_options.add_argument("user-agent=Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/120.0.0.0 Safari/537.36")
        service = EdgeService(EdgeChromiumDriverManager().install())
        driver = webdriver.Edge(service=service, options=edge_options)
        print("Successfully launched Edge.")
        return driver
    except Exception as e:
        print(f"Could not launch Edge (Manager): {e}")


    # 3. Try Firefox (Built-in Manager)
    try:
        print("Attempting to launch Mozilla Firefox...")
        firefox_options = FirefoxOptions()
        driver = webdriver.Firefox(options=firefox_options)
        print("Successfully launched Firefox.")
        return driver
    except Exception as e:
        print(f"Could not launch Firefox: {e}")

    # 4. Try Chrome (Built-in Manager)
    try:
        print("Attempting to launch Google Chrome...")
        chrome_options = ChromeOptions()
        chrome_options.add_argument("--no-sandbox")
        chrome_options.add_argument("--disable-dev-shm-usage")
        driver = webdriver.Chrome(options=chrome_options)
        print("Successfully launched Chrome.")
        return driver
    except Exception as e:
        print(f"Could not launch Chrome: {e}")

    # 5. Fail
    raise Exception("Could not launch any browser. Please ensure Edge, Firefox, or Chrome is installed.")

def scrape_upwork(driver, query):
    """
    Scrapes job listings from Upwork for a specific query.
    """
    print(f"Scraping Upwork for: {query}...")
    base_url = "https://www.upwork.com/nx/search/jobs/?q="
    formatted_query = query.replace(" ", "+")
    url = f"{base_url}{formatted_query}"
    
    driver.get(url)
    time.sleep(5)  # Wait for JS to load
    
    # DEBUG: Print status
    print(f"  > Current URL: {driver.current_url}")
    print(f"  > Page Title: {driver.title}")

    jobs_data = []
    
    try:
        soup = BeautifulSoup(driver.page_source, 'html.parser')
        
        # Debug: Save HTML if empty (only for the first failure to avoid spam)
        if "Access Denied" in driver.title or "Just a moment" in driver.title:
             print("  > BLOCKED by Cloudflare/Anti-bot.")
        
        # Upwork class names change frequently. We look for structural elements usually sections or articles.
        # This is an approximation based on common Upwork structures.
        job_cards = soup.find_all('section', attrs={'data-test': 'JobTile'})
        
        # Fallback selector if the above finds nothing
        if not job_cards:
             # Try finding articles with specific classes often used
             job_cards = soup.find_all('article')
        
        print(f"  > Found {len(job_cards)} potential job cards.")

        for card in job_cards:
            try:
                title_elem = card.find('h2')
                title = title_elem.get_text(strip=True) if title_elem else "N/A"
                
                # description often in a span with data-test='job-description-text' or similar
                desc_elem = card.find('span', attrs={'data-test': 'job-description-text'})
                description = desc_elem.get_text(strip=True) if desc_elem else "N/A"
                
                # Payment info
                type_elem = card.find('strong', attrs={'data-test': 'job-type'})
                job_type = type_elem.get_text(strip=True) if type_elem else "N/A"
                
                posted_elem = card.find('span', attrs={'data-test': 'posted-on'})
                posted = posted_elem.get_text(strip=True) if posted_elem else "N/A"

                link_elem = card.find('a')
                link = "https://www.upwork.com" + str(link_elem['href']) if link_elem and link_elem.has_attr('href') else "N/A"

                jobs_data.append({
                    "Platform": "Upwork",
                    "Title": title,
                    "Description": description[:100] + "...", # Truncate for display
                    "Type": job_type,
                    "Posted": posted,
                    "Link": link
                })
            except Exception as e:
                continue
                
    except Exception as e:
        print(f"Error scraping Upwork: {e}")
        
    return jobs_data

def scrape_fiverr(driver, query):
    """
    Scrapes Gigs from Fiverr. 
    Note: Fiverr is a marketplace where freelancers post Gigs. 
    This scrapes services available, which acts as a proxy for "competition" or "types of work".
    """
    print(f"Scraping Fiverr for: {query}...")
    base_url = "https://www.fiverr.com/search/gigs?query="
    formatted_query = query.replace(" ", "%20")
    url = f"{base_url}{formatted_query}"
    
    driver.get(url)
    time.sleep(5)
    
    gigs_data = []
    
    try:
        soup = BeautifulSoup(driver.page_source, 'html.parser')
        # Fiverr class names are dynamic. Look for grid items.
        
        gig_cards = soup.find_all('div', class_='gig-card-layout')
        
        for card in gig_cards:
            try:
                title_elem = card.find('a', title=True)
                title = title_elem['title'] if title_elem else "N/A"
                
                price_elem = card.find('span', class_='price') # Approximate class
                price = price_elem.get_text(strip=True) if price_elem else "N/A"
                
                seller_elem = card.find('div', class_='seller-name')
                seller = seller_elem.get_text(strip=True) if seller_elem else "N/A"

                link_elem = card.find('a')
                link = "https://www.fiverr.com" + str(link_elem['href']) if link_elem and link_elem.has_attr('href') else "N/A"

                gigs_data.append({
                    "Platform": "Fiverr",
                    "Title": title,
                    "Description": f"Seller: {seller}",
                    "Type": "Gig/Service",
                    "Posted": "N/A", # Fiverr gigs don't show posted date on card
                    "Link": link
                })
            except Exception as e:
                continue

    except Exception as e:
        print(f"Error scraping Fiverr: {e}")
        
    return gigs_data

def main():
    queries = ["Data Science", "AI Automation", "Machine Learning", "Artificial Intelligence"]
    
    driver = setup_driver()
    all_jobs = []
    
    try:
        for query in queries:
            all_jobs.extend(scrape_upwork(driver, query))
            # Optional: scrape_fiverr(driver, query) 
            # all_jobs.extend(scrape_fiverr(driver, query)) 
            
    finally:
        driver.quit()
        
    # Create DataFrame
    if not all_jobs:
        print("No jobs found or scraping blocked. Try running without headless mode to see if there is a CAPTCHA.")
        return

    df = pd.DataFrame(all_jobs)
    
    # Sort
    # Sorting text data is tricky, but we can sort by Platform or Title.
    # If we had parsed dates properly, we could sort by date. 
    # Here we sort by Title for demonstration.
    df_sorted = df.sort_values(by=['Platform', 'Title'])
    
    print("\nSorted Jobs:")
    print(df_sorted.head(10))
    
    # Save to file
    df_sorted.to_csv("freelance_jobs.csv", index=False)
    print("\nSaved all jobs to freelance_jobs.csv")

if __name__ == "__main__":
    try:
        main()
    except Exception as e:
        print(f"\nCRITICAL ERROR: {e}")
    finally:
        input("\nPress Enter to exit...")
