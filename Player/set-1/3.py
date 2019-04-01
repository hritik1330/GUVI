def reverseN(z):
    if not z//10:
        return str(z)
    return str(z%10) + reverseN(z//10)

print(reverseN(int(input())))
