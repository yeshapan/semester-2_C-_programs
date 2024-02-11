#python program to check if user is eligible to vote or not

#get age input from user
age=int(input("Enter your age: "))

#check eligibility using if else statement
if(age>=18):
    print("Hooray! You are eligible to vote!")
else:
    print("Oopsie! You are not eligible to vote yet")
