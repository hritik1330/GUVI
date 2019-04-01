from collections import Counter
c = Counter(input())
u = max(c.values())
print(u,end=" ")
for k,v in c.items():
    if v==u:
        print(k,end="")
