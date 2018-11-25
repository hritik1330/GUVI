n=input()
l=list(n)
z=[]
c=0
for a in l:
    if 48<=ord(a)<=57:
        c+=1
if c==len(l):
    for x in range(int(n)):
        z.append(int(input()))
    p=z[0]
    for x in range(len(z)):
        if z[x]<p:
            z[x],p=p,z[x]
        else:
            p=p
    print(p)
else:
    print("invalid input")
