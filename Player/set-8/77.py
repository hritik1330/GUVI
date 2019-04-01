n = int(input())
l = list(map(int,input().split()))

previous = l[0]
count = 1
max = 1

for u in l[1:]:
    if previous <= u:
        previous = u
        count += 1
    else:
        previous = u
        count = 1
    if max<count:
        max = count
print(max)
