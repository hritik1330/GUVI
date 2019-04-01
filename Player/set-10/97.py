u,k = map(int,input().split())
if u%2 == 0:
    u+=1
s = 0
for i in range(u,k,2):
    s+=i
print(s)
