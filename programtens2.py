n=input()
s=str(n)
l=list(n)
c=0
for x in l:
    if 48<=ord(x)<=57:
        c+=1
if c==len(l):
    for x in range(1,6):
        print(int(n)*x,end=" ")
else:
    print("inalid input")
