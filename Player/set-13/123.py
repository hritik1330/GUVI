import math as m
def isprime(n):
    for u in range(2, int(m.sqrt(n)+1)):
        if not n%u:
            return False
    return True
for u in range(2,int(input())):
    if isprime(u):
        print(u,end=' ')
