n = int(input())
print(*list(filter(lambda u: not(n%u),[i for i in range(2,n+1,2)])))
