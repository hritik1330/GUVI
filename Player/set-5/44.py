u,k = input().split()
k = int(k)%len(u)
print(u[k:]+u[:k])
