def fuck(k,ss,r,c):
    d={}
    for i in range(1,r*c+1):
        d[i]=True
    l=[]
    c=0
    for i in ss:
        #d[i[0]]=i[1:]
        l.append([c,i[1:]])
        c+=1
    l=sorted(l,key=lambda x:len(x[1]))
    c=0
   # print(l)
    for i in l:
        like=i[1]
        for fr in like:
            if d[fr]:
                c+=1
                d[fr]=False
                break
    return c 


k=int(input())
ss=[]
for i in range(k):
    ss.append(list(map(int,input().split())))
r=int(input())
c=int(input())

print(fuck(k,ss,r,c))
        
    