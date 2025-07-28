n,k=map(int,input().split())

l=[]
r=[]
for i in range(2,n+1):
    l.append(i)

cnt=0

while l:
    x=min(l)

    for i in range(len(l)):
        if i+1 > len(l):
            break
        if l[i]%x==0:
            m=l.pop(i)
            cnt+=1
            if cnt ==k:
                break

    if cnt==k:
        print(m)
        break