s = input()
from collections import Counter

c = Counter(s)
u = 0
for k,v in c.items():
    if k not in ['a','b']:
        u+=v
    if u>1:
        break
if u>1:
    print("no")
else:
    print("yes")
