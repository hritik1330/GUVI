def merge(l11, l2):
    p = 0
    q = 0
    r = []
    while p != len(l11) and q != len(l2):
        if l11[p] <= l2[q]:
            r.append(l11[p])
            p+=1
        else:
            r.append(l2[q])
            q+=1
    while p!=len(l11):
        r.append(l11[p])
        p+=1
    while q!=len(l2):
        r.append(l2[q])
        q+=1
    return r

k  = int(input())
r = []
tot = 0
for p in range(k):
    r.append(list(map(int,input().split())))
    tot += len(r[-1])

finl = []
while len(r) != 1:    
    finl = []
    k = len(r)
    for p in range(0,k,2):
        if p == k-1:
            finl.append(r[p])
        else:
            finl.append(merge(r[p], r[p+1]))
    r = finl

r = r[0]
print(*r)
