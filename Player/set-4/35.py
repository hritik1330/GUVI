n = input().lower()
from collections import Counter
u = Counter(n)
l = []
for k,v in u.items():
    if v==1:
        l.append(k)

print(" ".join(l))
