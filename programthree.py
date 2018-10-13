n=input()
nn=list(n)
#print(nn)
c=0
v1=["a",'e','i','o','u','A','E','I','O','U']
if len(nn)>1:
    print("invalid input")
else:
    for x in nn:
         if 32<=ord(x)<=64  or  91<=ord(x)<=96 or 123<=ord(x)<=127:
            c+=1
    if c==0:
        if nn[0] in v1:
            print("vowel") 
        else:
            print("consonant")
    else:
        print("invalid input")
