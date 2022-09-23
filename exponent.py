def raise_to_power(base,pow):
  result=1
  for index in range(pow):
     result=result*base
  return result
base1= int(input("ENTER a number: "))
pow1= int(input("ENTER the power: "))
print("the result is " + str(raise_to_power(base1,pow1)))
