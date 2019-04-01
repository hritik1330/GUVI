def num(z):
    if z<9:
        return z
    return 9 + 10*num(z-9)
    
z = int(input())
print(num(z))
