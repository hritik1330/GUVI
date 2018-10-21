n=input()
s=str(n)
l=list(n)
c=0
for x in l:
    if 48<=ord(x)<=57:
        c+=1
if c==len(l):
    f=1
    for x in range(int(n),1,-1):
        f=f*x
    print(f)
else:
    print("invalid input")
    
