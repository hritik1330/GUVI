n=input()
l=n.split()
l.sort()
z=len(l)
if z%2==0:
    i=(z//2)-1
    j=i+1
    m=(int(l[i])+int(l[j]))/2
else:
    m=l[(z//2)]
print(m)
