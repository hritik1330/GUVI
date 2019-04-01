n = int(input())
l = list(map(int,input().split()))
u=0
for i in range(n):
    if i+1 != l[i]:
        u+=1
print(u)
