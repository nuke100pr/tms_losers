n = int(input("Enter the pattern number to be printed \n"))
x = int(input("Enter the DP constant\n"))
a=[0 for i in range(x)]
b=[0 for i in range(x)]
a[1]=b[2]=b[1]=a[4]=1
a[2]=a[3]=b[3]=b[4]=2


def display():
      print("[",end ="")
      j=0
      while(j<(x-5)):
          j+=1
          if(a[j]!=0):
             if(a[j+1]==0):
               print("("+str(a[j])+","+str(b[j])+")",end ="")
             else:
               print("("+str(a[j])+","+str(b[j])+")"+",",end ="")
      print("]",end ="")

def func(nn,cc):
    if(nn==1):
       display()
    elif(cc==nn):
       display()
    else:
       cc+=1
       p=[0 for i in range(x)]
       q=[0 for i in range(x)]
       terms = pow(2,2*cc)
       terms2 = pow(2,2*(cc-1))
       for i in range(1,terms2+1,1):
           p[i]=b[i]
           q[i]=a[i]
       terms3 = pow(2,cc-1)
       for i in range(terms2+1,2*terms2+1,1):
           p[i]=a[i-terms2]+terms3
           q[i]=b[i-terms2]
       for i in range(2*terms2+1,3*terms2+1,1):
           p[i]=a[i-2*terms2]+terms3
           q[i]=b[i-2*terms2]+terms3
       terms4 =pow(2,cc)+1
       k=0
       for i in range(4*terms2,3*terms2,-1):
           k+=1
           p[i]=b[k]
           q[i]=terms4 - a[k] 
       for i in range(1,x-5,1):
           a[i]=p[i]
           b[i]=q[i]
       func(nn,cc)

func(n,1)



