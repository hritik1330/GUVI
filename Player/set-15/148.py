u,m = map(int,input().split())
flag = True
for i in range(u):
    nodes, edges = map(int,input().split())
    if edges>=m:
        flag = False
        break;
if flag:
    print("yes")
else:
    print("no")
