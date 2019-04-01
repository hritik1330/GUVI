n,x = map(int,input().split())
l = list(map(int,input().split()))
flag = False
for u in l:
    for j in l:
        if u+j == x:
            flag=True
            break
    if flag:
        break
if flag:
    print('yes')
else:
    print('no')
    
