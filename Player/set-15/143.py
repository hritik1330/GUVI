d = dict()
n = int(input())
l = list(map(int,input().split()))
dl = list(map(int,input().split()))

for u in range(n):
    d[dl[u]] = l[u]

dl.sort()
for u in range(n):
    print(d[dl[u]],end=" ")
