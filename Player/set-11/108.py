n = int(input())
l = list(map(int,input().split()))
for u in range(n):
    print(sum(l[:u+1]), end=' ')
