n = int(input())
l = list(map(int,input().split()))
p = 1
s1 = []
for i in l:
    if i<0:
        s1.append(i)
    elif i>0:
        p *= i

s1 = list(sorted(s1, reverse=True))
if len(s1)%2:
    s1 = s1[1:]

for i in s1:
    p *= i

print(p)

