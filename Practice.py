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

number = input("Phone: ")
output = ""
for i in number:
    output += word.get(i, "?") + " "
print(output.title())
