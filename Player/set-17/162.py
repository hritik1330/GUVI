n,k = map(int,input().split())
count = 0
for _ in range(n):
    s = input()
    u = False
    for i in ('a','e','i','o','u'):
        if i in s:
            u = True
            break
    if u:
        count+=1
if count>=k:
    print("yes")
else:
    print("no")
