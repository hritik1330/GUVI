def factorial(u):
    if u==1 or u==0:
        return 1
    return u*factorial(u-1)

print(factorial(int(input())))
