n = int(input())
l = sorted(list(map(int,input().split())))

import sys
min = sys.maxsize
for u in range(1,n):
    if l[u] - l[u-1] < min:
        min = l[u] - l[u-1]
print(min)
