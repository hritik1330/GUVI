n = int(input())
l = []
for u in range(n):
    l.append(input())
print(*sorted(l),sep="\n")
