n=input()
p=input()
l=list(n)
z=list(p)
c=0
d=0
for x in l:
    if 48<=ord(x)<=57:
        c+=1
for i in z:
    if 48<=ord(i)<=57:
        d+=1
pp=0
if c==len(l) and d==len(z):
    for y in range(int(n),int(p)):
        y=str(y)
        zz=len(y)
        for o in y:
            pp=pp+(int(o)**zz)
        if pp==int(y):
            print(pp)
        pp=0
else:
    print("invalid input")
        
