n = int(input())
l = list(map(int,input().split()))

maxs = 1
count = 1
for i in range(1,n):
    if l[i] >= l[i-1]:
        count += 1
    elif maxs < count:
        maxs = count
        count = 1

print(maxs)
