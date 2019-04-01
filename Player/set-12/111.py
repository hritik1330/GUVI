n,m = map(int,input().split())
t = list(map(int,input().split()))
d = dict()
for u in range(n):
    if t[u] not in d.keys():
        d[t[u]] = 1
    else :
        d[t[u]] += 1

for u in range(n,n+m):
    try:
        d[t[u]] -= 1
    except:
        d[t[u]] = -1

def rem(p):
    if p[1]==0:
        return True
f = filter(rem, d.items())

print(*(x for x,v in sorted(f)))
