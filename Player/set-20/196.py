from collections import Counter
n = int(input())
l = map(int,input().split())
u = Counter(l)
print(*list(filter(lambda x:u[x]==1,u.keys)))
