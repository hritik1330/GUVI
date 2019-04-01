import math
from collections import Counter
u = input()
c = Counter(u)
if c['1']==1:
    print(int(u,2))
else:
    print(2**(len(u)))
