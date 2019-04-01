u = int(input())
l = sorted(list(map(int,input().split())),reverse=True)
ml = l[:u//2]
print(sum(ml)*(u-1)//(u//2))
