n = int(input())
l = list(map(int,input().split()))
max = 0

for u in range(n):
    for j in range(u,n):
        x = u|j
        if x>max:
            max = x
print(max)

