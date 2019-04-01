u = {}
d2 = {}
for i in range(int(input())):
    x,y = map(int,input().split())
    u[x]=y
    d2[y]=x
print(min(len(u),len(d2))-1)
