def add3(z):
    x = (ord(z)-62)%26
    return chr(x+65)

print("".join(list(map(add3,input()))))
