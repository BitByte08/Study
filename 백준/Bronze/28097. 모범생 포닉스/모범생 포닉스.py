n = int(input())
a = list(map(int, input().split()))
b = sum(a) + (8 * (n-1))
c, d = b // 24, b % 24
print(c, d)