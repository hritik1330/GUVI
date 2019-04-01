def posMul(z, count):
    if z <= 9:
        return count*z
    return count*(z%10) + posMul(z//10, count+1)

print(posMul(int(input()), 1))
