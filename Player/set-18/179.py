import math
pos = 0
def minPow2(u):
    if u==1 or u==0:
        return u
    return u%2 + minPow2(u//2)
    
    
a,b = map(int,input().split())
mult = a|b
print(minPow2(mult))
