def dcb(u):
    if u==1 or u==0:
        return u
    return u%2+10*(dcb(u//2))

print(dcb(int(input())))
