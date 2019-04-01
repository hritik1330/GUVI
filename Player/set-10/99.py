def bco(u):
    if u==1 or u==0:
        return u
    s = 0
    for i in range(3):
        s += (2**i)*(u%10)
        u = u//10
    return s + 10*bco(u)
    
print(bco(int(input())))
