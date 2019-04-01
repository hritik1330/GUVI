u = int(input())
l = list(map(int,input().split()))
print(*sorted(l[:u//2]),*sorted(l[u//2:],reverse=True))
