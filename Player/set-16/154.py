u,k = input().split()
k = int(k)
newS = ''
for i in range(len(u)):
    if not (i+1)%k:
        newS += u[i].upper()
    else:
        newS += u[i]
print(newS)
