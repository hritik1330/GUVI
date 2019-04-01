def changeCase(n):
    u = ord(n)
    if u>=65 and u<=90:
        return chr(u+32)
    else:
        return chr(u-32)
print("".join(list(map(changeCase,input()))))
