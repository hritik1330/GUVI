u,b,c = map(int,input().split())
mult = 1
for i in range(b):
    if mult%c==0:
        mult*=u
    else:
        mult = (mult%c) * u

print(mult%c)
