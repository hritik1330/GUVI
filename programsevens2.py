n=input()
s=str(n)
l=list(n)
c=0
d=0
e=0
for x in l:
    if 48<=ord(x)<=57:
        c+=1
if c==len(l):
    z=len(n)
    p=0
    for x in n:
        p=p+(int(x)**z)
    if p==int(n):
        print("yes")
    else:
        print("no")
else:
    print("invalid input")
    
