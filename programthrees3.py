n=input()
l=list(n)
z=[]
c=0
for p in l:
    if 48<=ord(p)<=57:
        c+=1
if c==len(l):
    for x in range(int(n)):
        z.append(int(input()))
    m=z[0]
    for x in range(len(z)):
        if z[x]<m:
            z[x],m=m,z[x]
        else:
            m=m
    print(m)
else:
    print("invalid input")
