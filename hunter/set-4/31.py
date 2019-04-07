number = int(input())
l = list(map(int,input().split()))
p = 1
ss = []
for i in l:
    if i<0:
        ss.append(i)
    elif i>0:
        p *= i

ss = list(sorted(ss, reverse=True))
if len(ss)%2:
    ss = ss[1:]

for i in ss:
    p *= i

print(p)

