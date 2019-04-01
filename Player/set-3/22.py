y33,m = map(int,input().split())
for i in range(min(y33,m),0,-1):
    if not(y33%i) and not(m%i):
        print(i)
        break
