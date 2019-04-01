import math
pos = 0
def minPow2Remainder(x):
    if x==1 or x==0:
        return x
    return x%2 + minPow2Remainder(x//2)
    
    
u,b = map(int,input().split())
mult = u*b
print(minPow2Remainder(mult))
