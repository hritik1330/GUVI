l = [0, 1, 4, 9, 16, 25, 36, 49, 64, 81]

def digitSquare(z):
    if z <= 9:
        return l[z]
    return l[z%10] + digitSquare(z//10)

print(digitSquare(int(input())))
