#python program to find among three greatest numbers (using nested if)

#take input from user
num1=int(input("Enter first number: "))
num2=int(input("Enter second number: "))
num3=int(input("Enter third number: "))

#find max number
if(num1>=num2):
    if(num1>=num3):
        max=num1
    else:
        max=num3
elif(num2>=num1):
    if(num2>=num3):
        max=num2
    else:
        max=num3
        
#print output
print("Greatest amongst entered numbers is: ", max)
