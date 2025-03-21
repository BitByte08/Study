n = [0,1]
t = int(input())
for i in range(2,t+1):
    n.append(n[i-1]+n[i-2])
    
print(n[t])