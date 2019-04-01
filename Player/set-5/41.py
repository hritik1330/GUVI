u,k = map(int,input().split())
for i in range(u//k):
    if k**i == u:
        print("yes")
        break
    elif k**i>u:
        print("no")
        break
