u,m,a = map(int,input().split())
flag = True
for i in range(u):
    node, edges = map(int,input().split())
    if node==a and edges>0:
        flag = False
        break;
if flag:
    print(1)
else:
    print(0)
