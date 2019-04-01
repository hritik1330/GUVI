l = list(input().split())
for z in range(len(l)):
    l[z] = l[z].lower()

l = sorted(l)
print(*l, sep="\n")
