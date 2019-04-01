n,k = map(int,input().split())
l = list(map(int,input().split()))

for u in range(n):
    if l[u] == k:
        print(u+1)
        break
