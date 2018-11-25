n=input()
l=list(n)
z=[]
c=0
for a in l:
    if 48<=ord(a)<=57:
        c+=1
if c==len(l):
    for x in range(int(n)):
        z.append(int(input()))
    print(sorted(z))
else:
    print("invalid input")
