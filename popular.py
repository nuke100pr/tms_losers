import random
points = [0 for i in range(54)]
data =[[0 for i in range(54)] for j in range(54)]
count = [0 for i in range(54)]

for i in range (0,54,1):
  file_name =str(i+1)+".txt"
  f= open(file_name,"r")
  c = 0 
  while True:
   line = f.readline()
   if not line :
      break 
   else :
      data[i][c] = int(line)
      c=c+1

for i in range (0,54,1):
   c=0
   for j in range(0,54,1):
     if(data[i][j]!=0):
       c+=1
   count[i]=c

temp=0   
def func(person,y):
    global temp
    if(y>100):
     return temp-1
    else :
      rn = random.randint(0,count[person]-1)
      person2 = data[person][rn]
      points[person2-1] +=1
      y +=1
      temp = person2
      return func(person2-1,y)

n= input("ENTER THE RANGE\n")
x= input("STARTING PERSON\n")

t=0
a=0
for i in range(1,int(n),1):
  if(i==1):
    t =func(int(x),0) 
  else:
    a =func(t,0)
    t=a

index =1
largest = points[0]
for i in range (0,54,1):
    if(points[i]>largest):
      largest = points[i]
      index = i+1
    
print("MOST POPULAR ONE IS ="+str(index))
print(points)



   




