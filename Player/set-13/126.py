from collections import Counter

n,k = map(int,input().split())
l = list(map(int,input().split()))
u = Counter(l)
u = sorted(filter(lambda x: u[x]<k, u.keys()))
print(*u)
