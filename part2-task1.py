import math

def right_angle_triangle(rows):
 for i in range(rows):
    for j in range(i+1):
        print("* ", end="")
    print("")


def pyramid(rows):

  k = rows - 1 # It is used for number of spaces  
  for i in range(0, rows):  
    for j in range(0, k):  
        print(end=" ")  
    k = k - 1   # decrement k value after each iteration  
    for j in range(0, i + 1):  
        print("* ", end="")  # printing star  
    print("")  

def square(height):
    for i in range(height):
      for j in range(height):
        print("* ", end=" ")
      print(" ")

def circle(height):
    for i in range (0,2*height+1):
        for k in range (0,2*height+1):
           if (math.pow(i-height,2)+math.pow(k-height,2) <= math.pow(height,2)+1):
              print("*", end=" ")
           else: 
                print(" ", end=" ")
        print(" ")
    print("\n")

x= int(input("enter how many shape: "))
all_2= []
y=1
while y<=x:
    print("select a shape: ")
    print("1-right angled triangle")
    print("2-pyramid")
    print("3-square")
    print("4-circle")
    shape=int(input("Shape number: "))
    height=int(input("enter height: "))
    all_1 =(shape,height)
    all_2.append(all_1)

    y=y+1

sort= sorted(all_2,key=lambda t: t[1])
l=0
for l in range(0,len(sort)):
    if sort[l][0] ==1:
        right_angle_triangle(sort[l][1])
    elif sort[l][0] == 2:
        pyramid(sort[l][1])
    elif sort[l][0] == 3:
        square(sort[l][1])
    elif sort[l][0] == 4:
        circle(sort[l][1])

list.sort(sorted)