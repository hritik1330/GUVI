x1,y1 = map(int,input().split())
x2,y2 = map(int,input().split())
x33,y33 = map(int,input().split())

if x1*(y2-y33)+x2*(y33-y1)+x33*(y1-y2):
    print("no")
else:
    print("yes")
