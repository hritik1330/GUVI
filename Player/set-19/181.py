def isSum(n,a,u):
    if a<u:
        u,a=a,u
    while n>=0:
        if n%a==0:
            return True
        n-=u
    return False
        
n = int(input())
if isSum(n,3,7):
    print("yes")
else:
    print("no")
