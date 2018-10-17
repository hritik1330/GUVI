n=input()
s=str(n)
l=list(n)
c=0
d=0
e=0
for x in l:
    if 48<=ord(x)<=57:
        c+=1
su=0
if c==len(l):
    n=int(n)
    for x in range(2,n):
        if n%x==0:
            e+=1
    if e>0:
        print("no")
        
    else:
        print("yes")
else:
    print("invalid input")
