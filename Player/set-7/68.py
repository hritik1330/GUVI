u = int(input())
l = list(map(int,input().split()))
num = l[0]
o = 1
max = 1

for i in l[1:]:
    if i==num:
        o +=1
    else:
        num = i
        o = 1
    if max < o:
        max = o
print(max)
