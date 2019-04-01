def GCD(a,b):
    if a==b:
        return a
    if a>b:
        return GCD(a-b,b)
    return GCD(a,b-a)

n = int(input())
l = list(map(int,input().split()))
gcd = 1
for u in l:
    gcd = GCD(gcd,u)
print(gcd)
