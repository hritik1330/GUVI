n,z = map(int,input().split())
l = list(map(int,input().split()))
z = n - z%n
l = l[z:]+l[:z]
print(*l)
