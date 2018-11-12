n=input()
a=input()
d=input()
u=list(d)
l=list(n)
z=list(d)
c=0
g=0
e=0
for x in u:
    if 48<=ord(x)<=57:
        e+=1
for p in l:
    if 48<=ord(p)<=57:
        c+=1
for i in z:
    if 48<=ord(i)<=57:
        g+=1
if c==len(l) and g==len(z) and e==len(u):
    sum=int(n)/2*(2*int(a)+(int(n)-1)*int(d))
    print(int(sum))
else:
    print("invalid input")
   
