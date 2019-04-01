n = int(input())
l = list(map(int,input().split()))
arr = l[0]

for u in range(1,n):
    arr = arr | l[u]
print(arr)
