n=input()
nn=list(n)
c=0
for x in nn:
    if 97<=ord(x)<=122 or 65<=ord(x)<=90:
        c+=1
if c==0:
    n=float(n)
    if n==0:
        print("zero")
    elif n>0:
        print("positive")
    else:
        print("negative")
else:
    print("invalid input")
