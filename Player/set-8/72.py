n = int(input())
l = list(map(int,input().split()))

max = l[0]

for u in l[1:]:
    if max>u:
        break
    max = u
print(max)
