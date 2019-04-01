n = int(input())
l = sorted(list(map(int,input().split())))
u=0
for i in range(n):
    if i+1 != l[i]:
        u+=abs(l[i]-i-1)
print(u)
