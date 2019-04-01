from math import sqrt
def isPrime(n):
    for z in range(2, int(sqrt(n))+1):
        if not n%z:
            return False
    return True

def printAll(n):
    if 2<n:
        print(2,end=" ")
    for z in range(3, n, 2):
        if isPrime(z):
            print(z, end=" ")

printAll(int(input()))
