n = int(input())
u = list(map(int,input().split()))
l2 = list(map(int,input().split()))

if set(u)==set(l2):
    print("yes")
else:
    print("no")
