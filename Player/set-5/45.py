import math
p,a = map(int,input().split())
u = (p + int(math.sqrt(p**2 - 16*a)))//(4)
r2 = (p - int(math.sqrt(p**2 - 16*a)))//(4)
if 2*(u+r2)==p and u*r2==a:
    print('yes')
else:
    print('no')
