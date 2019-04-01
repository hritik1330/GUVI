import math
def isPrimeNot(u):
    for i in range(2,int(math.sqrt(u))+1):
        if not u%i:
            return "yes"
    return "no"

print(isPrimeNot(int(input())))
