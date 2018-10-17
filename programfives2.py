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
if c==len(l) and d==len(z):
    
    for x in range(int(n)+1,int(p)):
        if int(x)%2==0:
            print(x,end=" ")
else:
    print("invalid input")
        
        
