import sys

def mincoinCount(coin, cost):
    dp = [0] * (cost+1)

    dp[0] = 0
    for i in range(1,cost+1):
        dp[i] = sys.maxsize

    for i in range(1, cost+1):
        for j in range(len(coin)):
            if coin[j] <= i:
                sub_res = dp[i-coin[j]]
                if sub_res != sys.maxsize and sub_res + 1 < dp[i]:
                    dp[i] = sub_res +1

    if dp[cost] == sys.maxsize:
        return -1
    return dp[cost]

n,k = map(int,input().split())
coin = list(map(int,input().split()))
print(mincoinCount(coin, k))
