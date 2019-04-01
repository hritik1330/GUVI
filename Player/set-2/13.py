def sumDigitSquare(z):
    if z<=9:
        return z**2
    return (z%10)**2 + sumDigitSquare(z//10)

print(sumDigitSquare(int(input())))
