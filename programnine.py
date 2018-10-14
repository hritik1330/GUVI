n=input()
nn=list(n)
k=input()
kk=list(k)
c=0
z=0
lst=[]
s=0
ss=0
for x in nn:
    if 97<=ord(x)<=122 or 65<=ord(x)<=90 or 32<=ord(x)<=42 or 58<=ord(x)<=64 or  91<=ord(x)<=96 or 123<=ord(x)<=127 or ord(x)==47 or ord(x)==44 or ord(x)==43 or ord(x)==45 or  ord(x)==46:
        c+=1
x=0
p=0
for x in kk:
    if 97<=ord(x)<=122 or 65<=ord(x)<=90 or 32<=ord(x)<=42 or 58<=ord(x)<=64 or  91<=ord(x)<=96 or 123<=ord(x)<=127 or ord(x)==47 or ord(x)==44 or ord(x)==43 or ord(x)==45 or  ord(x)==46:
        p+=1
if c==0 and p==0:
    if int(n)<int(k):
        print("invalid input")
    else:
        for i in range(int(n)):
            lst.append(input())
    for u in range(int(k)):
        ss=ss+int(lst[u])
    print(ss)
else:
    print("invalid input")
