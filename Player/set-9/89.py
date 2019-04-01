def fac(u):
    if u==1:
        return 1
    return u*fac(u-1)
u,r = map(int,input().split())
print(fac(u)//fac(u-r))
