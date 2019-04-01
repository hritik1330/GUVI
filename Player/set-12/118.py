u = list(input().split())
min = u[0]
for x in u[1:]:
    if min < x:
        x = min

print(min)
