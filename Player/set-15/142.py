l = []
n, k = map(int,input().split())
for _ in range(n):
    l.append(set(list(input())))

flag = True
for u in range(n-k):
    s = set()
    for j in range(u,k):
        sl = len(s)
        s.union(l[j])
        if sl+len(l[j])!=len(s):
            flag = False
            break
    if flag == False:
        break
if flag:
    print("no")
else:
    print("yes")
