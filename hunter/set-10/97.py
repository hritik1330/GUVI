def gcd(z,m):
    if m == 0:
        return z
    return gcd(m, z%m)

z,m = map(int,input().split())
if gcd(z,m)==1:
    print("yes")
else:
    print("no")
