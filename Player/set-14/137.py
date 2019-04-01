def d2b(u):
    if u==0 or u==1:
        return str(u)
    return str(u%2) + d2b(u//2)
b = d2b(int(input()))
for i in range(len(b)):
    if b[i]=='1':
        print(i+1)
        break
if b=='0':
    print(0)
