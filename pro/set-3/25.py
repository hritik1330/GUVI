n = int(input())
lst = list(map(int,input().split()))

maximums = 1
count = 1
for i in range(1,n):
    if lst[i] >= lst[i-1]:
        count += 1
    elif maximums < count:
        maximums = count
        count = 1

print(maximums)
