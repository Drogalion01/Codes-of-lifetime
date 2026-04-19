from ecommerce.dice import roll

class Roll:
    def play(self):
        print(f'Rolling dice ...')
        print(f'You rolled {roll()}')

P = Roll()

P.play()

# import random as rnd
#
# print(f'({rnd.randint(1,6)}, {rnd.randint(1,6)})')


# import random as rnd
# 
# members = list(input("Enter team members: ").strip().split())
# 
# print(f"The leader is {rnd.choice(members)}")



# from ecommerce.shipping import cost
#
# if __name__ == '__main__':
#     print(cost(int(input("Price of the product: "))))



# import util
#
# numbers = list(map(int, input("Enter numbers: \n").split()))
#
# util.find_max(numbers)


# class Person:
#     def __init__(self, s):
#         self.s = s
#     def name(self):
#         print(f"Hello, {self.s}.")
#     def talk(self):
#         print(f"{self.s}, talk")
        

# p = Person(input("What's your name?\n"))
# p.name()
# p.talk()

    
        



# def digits(number):
#     word = {
#         "1" : "One",
#         "2" : "Two",
#         "3" : "Three",
#         "4" : "Four",
#         "5" : "Five",
#         "6" : "Six",
#         "7" : "Seven",
#         "8" : "Eight",
#         "9" : "Nine",
#         "0" : "Zero"
#     }
#     output = ""
#     for i in number:
#         output += word.get(i, "?") + " "
#     return output
    
# print(digits(input("Phone: ")))


# try:
#     number = int(input("> "))
#     print(number)
# except ValueError:
#     print ('Invalid input')
    
# class Point:
#     def __init__(self, x, y):
#         self.x = x
#         self.y = y

#     def move(self):
#         print("move")
    
#     def draw(self):
#         print("draw")
    
# point1 = Point(45, 2)
# print(point1.x + point1.y)

