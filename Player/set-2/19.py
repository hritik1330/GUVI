import math
def isPrime(n):
    for z in range(2,int(math.sqrt(n))+1):
        if not n%z:
            return False
    return True

n = int(input())
for z in range(2,n//2+1):
    if not n%z and isPrime(z):
        print(z,end=" ")
