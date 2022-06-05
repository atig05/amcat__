def fuck(ar):
    n=max(ar)
    t=[0]*(n+1)
    for i in range(1,n+1):
        t[i]=t[i//2]+i%2
    l=[]
    for i in ar:
        l.append([t[i],i])
    l=sorted(l)
    newArr=[]
    for i in l:
        newArr.append(i[1])
    return newArr
  

ar=list(map(int,input().split()))
print(fuck(ar))
  