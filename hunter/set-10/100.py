from math import sqrt

def is_this_prime(z):
    if not z%2:
        return False
    for i in range(2, int(sqrt(z))+1):
        if not z%i:
            return False
    return True

z = int(input())
for i in range(2, z-2):
    if is_this_prime(i) and is_this_prime(z-i):
        print(i,z-i)
        break
    
