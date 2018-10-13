n=input()
nn=list(n)
#print(nn)
c=0
if len(nn)>1:
    print("NO")
else:
    for x in nn:
         if 32<=ord(x)<=64  or  91<=ord(x)<=96 or 123<=ord(x)<=127:
            c+=1
    if c==0:
        if 65<=ord(n)<=90 or 97<=ord(x)<=122:
            print("alphabet")
        else:
            print("NO")
    else:
        print("No")
