def digits(number):
    word = {
        "1" : "One",
        "2" : "Two",
        "3" : "Three",
        "4" : "Four",
        "5" : "Five",
        "6" : "Six",
        "7" : "Seven",
        "8" : "Eight",
        "9" : "Nine",
        "0" : "Zero"
    }
    output = ""
    for i in number:
        output += word.get(i, "?") + " "
    return output
    



output = digits(input("Phone: "))

print(output.title())
