o = int(input())
l = list(map(int,input().split()))

u = l[0]

for i in l[1:]:
    if u+1 == i:
        print(i, end=' ')
    elif u-1 == i:
        print(u, end=' ')
    u = i
