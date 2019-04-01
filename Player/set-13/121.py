import math
n=int(input())
l=[]
for u in range(n):
    l.append(input())
min,small=math.inf,""
for u in l:
    if ord(u[0])<min:
	min=ord(u[0])
	small=u
print(small)
