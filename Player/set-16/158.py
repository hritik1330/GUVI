import math
pos = 0
def minPow2Remainder(x,s):
    if s==1:
        return 1
    if x%2:
        s+=1
    return 1+minPow2Remainder(x//2,s)
    
    
u,b = map(int,input().split())
mult = u*b
print(minPow2Remainder(mult,0))
