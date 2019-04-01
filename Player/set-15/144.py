n = int(input())
previous = 100001
l = list(map(int,input().split()))
for u in range(n):
    x = l[u]
    if not x%previous:
        print(x,end=" ")
    previous = x
