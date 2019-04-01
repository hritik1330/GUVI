u = int(input());s=0
l = list(map(int,input().split()))
for i in range(1,u):
    s += l[i]+l[i-1]
print(s)
