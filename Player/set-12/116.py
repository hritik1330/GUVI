n = int(input())
l = list(map(int,input().split()))
d = {}
for u in l:
    try:
        d[u] +=1
    except:
        d[u] = 1
d2 = sorted(d, key=d.get, reverse=True)
print(d2)
