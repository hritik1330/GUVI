n=input()
s=str(n)
l=list(n)
c=0
d=0
for x in l:
    if 48<=ord(x)<=57 or ord(x)==46:
        c+=1
su=0
if c==len(l):
    p=""
    if int(n)<=1000:   
        for x in range(len(s)-1,-1,-1):
            p=p+s[x]
        if n==p:
            print("Yes")
        else:
            print("No")
    else:
        print("invalid input")
else:
    print("invalid input")
        
