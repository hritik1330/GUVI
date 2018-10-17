n=input()
k=input()
l=list(n)
s=list(k)
c=0
d=0
e=0
f=0
for x in l:
    if 48<=ord(x)<=57 or ord(x)==43 or ord(x)==45 or ord(x)==46:
        c+=1
for i in s:
    if 48<=ord(i)<=57 or ord(i)==43 or ord(i)==45 or ord(i)==46:
        d+=1
su=0
if c==len(l) and d==len(s):
    for u in l:
        if ord(u)==46:
            e+=1
    for v in s:
        if ord(v)==46:
            f+=1
    if e!=0 or f!=0:
        n=float(n)
        k=float(k)
        su=float(n**k)
    else:
        n=int(n)
        k=int(k)
        su=n**k
   
    print(su)
        
else:
    print("invalid input")
    
    
