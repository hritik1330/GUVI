u,b,c = map(int,input().split())
if (u**2+b**2==c**2 or u**2+c**2==b**2 or b**2+c**2==u**2):
    print("yes")
else:
    print("no")
