n,u = map(int,input().split())
kl = list(map(int,input().split()))
found = 0
for i in kl:
    if i<=u and i>found:
        found = i
print(found)
