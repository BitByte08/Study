a, b = map(int, input().split())
 
if b == 1: print(-1)
else:
    temp = (a*b)//(b-1)
    if(a*b) % (b-1): temp += 1 
    print(temp)