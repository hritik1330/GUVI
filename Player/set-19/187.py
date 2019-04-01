def coPrimes(u,b):
    if u%b==0 and b!=1:
        return False
    else:
        if u==1 or b==1:
            return True
        else:
            return coPrimes(b,u%b)

u,b = input().split()
if coPrimes(len(u),len(b)):
    print("yes")
else:
    print("no")
