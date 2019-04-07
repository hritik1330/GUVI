def pMul(z, count):
    if z <= 9:
        return count*z
    return count*(z%10) + pMul(z//10, count+1)

print(pMul(int(input()), 1))
