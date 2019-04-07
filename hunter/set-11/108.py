f = 1
def pMul(z, p):
    if z <= 9:
        f = z
        return z**p
    return (z%10)**p + pMul(z//10, z%10)

z = int(input())
print(pMul(z, 0) - 1 + (z%10)**f)
