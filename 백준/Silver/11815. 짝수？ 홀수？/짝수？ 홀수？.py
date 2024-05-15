n = int(input())
a = input()
a = a.split()
a = list(map(int, a))

for i in range(n):
    if a[i] == (int(a[i] ** 0.5) ** 2):
        print(1, end = " ")
    else:
        print(0, end = " ")