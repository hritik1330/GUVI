u,b,c = map(int,input().split())
if u+b>c or b+c>u or c+u>b:
    print("yes")
else:
    print("no")
