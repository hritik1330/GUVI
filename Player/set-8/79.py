n = int(input())
l = list(map(int,input().split()))
import sys
min = sys.maxsize
max = 0
for u in l:
    if max<u:
        max = u
    if min > u:
        min = u
print(max-min)
