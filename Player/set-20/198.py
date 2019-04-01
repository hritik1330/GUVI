n = int(input())
l = list(map(int,input().split()))
min = 10000000
max = 0
u = -1
maxi = -1
for i in range(n):
    if l[i]>max:
        max=l[i]
        maxi=i
    if l[i]<min:
        min=l[i]
        u=i

print(maxi-u)
