#python program to find simple interest

#take principal amount, rate of interest and time inputs from user
prin=float(input("Enter principal amount: "))
rate=float(input("Enter rate of interest (in percentage): "))
time=float(input("Enter time period (in years): "))

#calculate simple interest and display it
si=(prin*rate*time)/100
print("Simple interest calculated is: ", si)
