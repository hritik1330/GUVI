def u(n):
    if not n:
        return 0
    else:
        return 1 + u(n//2)
print(u(int(input())))
