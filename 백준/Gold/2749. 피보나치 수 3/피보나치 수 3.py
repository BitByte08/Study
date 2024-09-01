n = int(input())
dp = [0, 1]
for i in range(1500000):
    dp.append((dp[i] + dp[i + 1]) % 1000000)
print(dp[n % 1500000])

