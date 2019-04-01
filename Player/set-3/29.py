def isPerfectSquare(u):
    x = u//2
    l = [x]
    while x*x!=u:
        x=(x+u//x)//2
        if x in l:
            return False
        l.append(x)
    return True

l,r = map(int,input().split())
print(len(list(filter(isPerfectSquare,range(l,r+1)))))
