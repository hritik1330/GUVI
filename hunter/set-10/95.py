from math import sqrt
def is_this_prime(n):
    for z in range(2, int(sqrt(n))+1):
        if not n%z:
            return False
    return True

def printAll(n):
    if 2<n:
        print(2,end=" ")
    for z in range(3, n, 2):
        if is_this_prime(z):
            print(z, end=" ")

printAll(int(input()))
