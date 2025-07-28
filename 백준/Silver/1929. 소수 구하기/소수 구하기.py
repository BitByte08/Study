def prime(n):
    if n<2: return 0
    for i in range(2, int(n**0.5)+1):
        if n%i==0: return 0
    return 1
start, end = map(int, input().split())

for i in range(start, end+1):
    if prime(i): print(i)