def isAlternating(n,u):
    state = 'I'
    for i in range(1,n):
        if u[i] > u[i-1] and state=='D':
            return "no"
        if u[i] < u[i-1] and state=='I':
            return "no"
        if state=='I':
            state='D'
        else:
            state='I'
    return "yes"
    
n = int(input())
u = list(map(int,input().split()))
print(isAlternating(n,u))
