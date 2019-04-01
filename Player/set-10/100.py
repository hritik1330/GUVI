def bch(u):
    if u==1 or u==0:
        return u
    s = 0
    for i in range(4):
        s += (2**i)*(u%10)
        u = u//10
    return s + 10*bch(u)
    
print(bch(int(input())))
