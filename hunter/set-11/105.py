def digits_count(z):
    if z<=9:
        return 1
    return 1 + digits_count(z//10)

def posMul(z, power):
    if z <= 9:
        return z**power
    return (z%10)**power + posMul(z//10, power)

z = int(input())
print(posMul(z, digits_count(z)))
