from math import *
num1=float(input("Enter First Number:")) 
op=input("Enter the operattion:")
num2=float(input("Enter second Number:"))
if op=="+":
   print("the result = " + str(num1+num2))
elif op=="-":
   print("the result = " + str(num1-num2))
elif op=="*":
    print("the result = " + str(num1*num2))
elif op=="/":
    print("the result = " + str(num1/num2))
else:
    print("INVALID OPERATION")