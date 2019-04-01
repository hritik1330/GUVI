import sys

def minimumcoincount(coins, cost):
    ddp = [0] * (cost+1)

    ddp[0] = 0
    for i in range(1,cost+1):
        ddp[i] = sys.maxsize

    for i in range(1, cost+1):
        for j in range(len(coins)):
            if coins[j] <= i:
                sub_res = ddp[i-coins[j]]
                if sub_res != sys.maxsize and sub_res + 1 < ddp[i]:
                    ddp[i] = sub_res +1

    if ddp[cost] == sys.maxsize:
        return -1
    return ddp[cost]

n,k = map(int,input().split())
coins = list(map(int,input().split()))
print(minimumcoincount(coins, k))
