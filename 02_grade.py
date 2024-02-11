#python program to ask user for marks and display grade

#take marks input
marks=int(input("Enter marks obtained (out of 100): "))

#determine grade obtained using else if (elif)
if(marks>100 or marks<0):
    print("Error! Pls enter valid marks.")
elif(marks>90):
    grade='A'
elif(marks>80):
    grade='B'
elif(marks>70):
    grade='C'
elif(marks>60):
    grade='D'
else:
    grade='F'
    
#print output
print("Grade obtained is: ", grade)
