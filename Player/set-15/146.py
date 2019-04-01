def factb(u,b):
    if u<=b:
        return 1
    return u*(factb(u-1,b))
            
u,b = map(int,input().split())
print(factb(u,b))
