n=input()
nn=list(n)
#print(nn)
c=0
for x in nn:
    if 97<=ord(x)<=122 or 65<=ord(x)<=90 or 32<=ord(x)<=42 or 58<=ord(x)<=64 or  91<=ord(x)<=96 or 123<=ord(x)<=127 or ord(x)==47 or ord(x)==44 or ord(x)==46:
        c+=1
        
if c==0:
    print(len(n))
else:
    print("invalid input")
