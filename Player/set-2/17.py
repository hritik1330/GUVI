n,m = map(int,input().split())
for z in range(max(n,m),100000):
    if not(z%n) and not(z%m):
        print(z)
        break
    
