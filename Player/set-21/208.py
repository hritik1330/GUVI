n = int(input())
d1 = 0
d2 = 0
for i in range(n):
	l = list(map(int,input().split()))
	for u in range(n):
		if i==u:
			d1 += l[u]
		if i+u = n-1:
			d2 += l[u]
print(d1*d2)