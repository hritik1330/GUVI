u,b,c = map(int,input().split())
if (u+b>c or b+c>u or c+u>b) and (u!=b and b!=c):
    print("yes")
else:
    print("no")
