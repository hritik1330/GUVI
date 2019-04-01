import math
def isprime(n):
    for u in range(2, int(math.sqrt(n))+1):
        if not n%u:
            return False
    return True
if isprime(len(input())):
    print("yes")
else:
    print("no")
