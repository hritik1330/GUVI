n=input()
p=input()
l=list(n)
z=list(p)
c=0
d=0
e=0
for x in l:
    if 48<=ord(x)<=57:
        c+=1
for i in z:
    if 48<=ord(i)<=57:
        d+=1
if c==len(l) and d==len(z):
    n=int(n)
    p=int(p)
    for f in range(n+1,p):
        for x in range(2,f):
            if f%x==0:
                e+=1
        if e==0:
            print(f ,end=" ")
        e=0
else:
    print("invalid input")
