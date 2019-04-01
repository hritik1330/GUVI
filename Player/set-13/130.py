n = int(input())
l = list(map(int,input().split()))
presum = 0
for u in l:
    presum += u
    if u%2:
        print(u,end=' ')
    else:
        print(presum, end=' ')
