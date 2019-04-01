u = False
for _ in range(int(input())):
    s = input()
    u = False
    for i in ('a','e','i','o','u'):
        if i in s:
            u = True
            break
    if not u:
        break
if u:
    print("yes")
else:
    print("no")
