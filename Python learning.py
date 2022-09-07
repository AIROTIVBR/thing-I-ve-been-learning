from pydoc import doc
from time import sleep
from tkinter.messagebox import YES
from traceback import print_tb


print ("YO - Hi,welcome to my project where I will try to read your mind, at the end of the process please give a feedback if it worked :)")

a1 = input ("Are you ready ?")

while a1 == "no" :
    print("YO - Okay... I'll wait for you.")
    sleep(3)
    a1 = input ("Are you ready ?")
if a1 == "yes":
    print("YO - Let's get started then,think of a number.")
    print("Yo - Now, keep that number on your mind, and do not tell to a single soul.")
    sleep(4)
else :
    sleep(1)

print("YO - So, let's start simple, add 7 to that number, everytime you get the result write 'ok' below.")

a2 = input () 

if a2 == "ok":
    print ("YO - Now add 42 to the result. ")
else :
    sleep(1)

a3 = input()

if a3 =="ok":
    print ("YO- Please multiply per 3. ")
else : 
    sleep(1)

a4 = input()

if a4 == "ok" :
        print ("YO- Can you tell me your final number?")
else :
        sleep (1)

af = input()

r = af /3 - 49

print ( r )




