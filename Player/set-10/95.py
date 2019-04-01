u,k,p = map(int,input().split())
l = []
while u>0:
    x = u%10
    u = u//10
    l.append(x)

print(l[-(k+p)])
