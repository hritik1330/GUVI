l = [0, 1, 4, 9, 16, 25, 36, 49, 64, 81]

def digitsqure(z):
    if z <= 9:
        return l[z]
    return l[z%10] + digitsqure(z//10)

print(digitsqure(int(input())))
