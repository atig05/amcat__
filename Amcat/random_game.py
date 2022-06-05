def fuck(n,x,numcards):
    numcards=sorted(numcards)
    pr=0;
    for i in  range(1,len(numcards)):
        if(numcards[pr][1]>=numcards[i][0]):
            numcards[pr][0]=min(numcards[pr][0],numcards[i][0])
            numcards[pr][1]=max(numcards[pr][1],numcards[i][1])
        else:
            pr+=1
            numcards[pr][0]=numcards[i][0]
            numcards[pr][1]=numcards[i][1]
    numcards=numcards[:len(numcards)-1]
    m=0
    for i in numcards:
        s=0
        for j in i:
            s+=x[j-1]
        m=max(m,s)
    print(m)
 
n=int(input())
x=list(map(int,input().split()))
k=int(input())
numcards=[]
for  i in range(k):
    a,b=input().split()
    a=int(a)
    b=int(b)
    numcards.append([a,b])
fuck(n,x,numcards)
