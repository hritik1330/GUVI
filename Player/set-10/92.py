def bcd(u):
    if u==1 or u==0:
        return u
    return u%10+2*(bcd(u//10))

print(bcd(int(input())))
