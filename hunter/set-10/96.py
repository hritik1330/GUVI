def num(zz):
    if zz<9:
        return zz
    return 9 + 10*num(zz-9)
    
zz = int(input())
print(num(zz))
