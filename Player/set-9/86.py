u = int(input())
l = list(map(int,input().split()))
arr = l[0]

for i in range(1,u):
    arr = arr ^ l[i]
print(arr)
