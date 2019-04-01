from collections import Counter
u = input()
c = Counter(u)
l = list(filter(lambda x: c[x]>1, c.keys()))
n2 = ''
for i in u:
    if i in l:
        n2+=i.upper()
    else:
        n2+=i
print(n2)
