n = int(input())
o = 1
d2 = 1
for i in range(n):
	l = list(map(int,input().split()))
	for u in range(n):
		if i==u:
			o *= l[u]
		if i+u = n-1:
			d2 *= l[u]
print(o*d2)