from collections import Counter
n = int(input())
l = list(map(int,input().split()))
c = Counter(l)
ll = list(filter(lambda x: c[x]>1,c.keys()))
u = 0
for i in ll:
    u+=c[i]
print(u)
