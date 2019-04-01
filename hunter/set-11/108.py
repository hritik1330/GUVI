f = 1
def posMul(z, p):
    if z <= 9:
        f = z
        return z**p
    return (z%10)**p + posMul(z//10, z%10)

z = int(input())
print(posMul(z, 0) - 1 + (z%10)**f)
