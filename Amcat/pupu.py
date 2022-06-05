import math
l=[True]*300
l[0]=False
l[1]=True
l[2]=2
for i in range(2,300):
    for j in range(i+i,300,i):
        l[j]=False
def isPrime(n):
    return l[n]

def countp(s):
    min=0
    if(isPrime(s)):
        min=1
    elif s%2==0:
        min=2;
    else:
        if isPrime(s-2):
            min=2
        else:
            min=3
   
    return min

def divSum(n) :
    if(n == 1):
       return 1
    result = 0
    for i in range(2,(int)(math.sqrt(n))+1) :
        if (n % i == 0) :
            if (i == (n/i)) :
                result = result + i
            else :
                result = result + (i + n//i)
    return (result + n + 1)
    
    
def fuck(s):
    return s**countp(s)+divSum(s)
print(fuck(int(input())))
