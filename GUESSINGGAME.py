from pickle import FALSE, TRUE


secret_word="RED"
guess=""
guess_count=0
flag=TRUE

while guess!=secret_word and (flag):
   if(guess_count<3):
     guess = input("ENTER A COLOR:")
     guess_count+= 1
   else:
      flag = False

if(flag==False):
  print("YOU LOST")
else:
  print("YOUU WINNNN!")
      