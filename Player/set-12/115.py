u,s2 = input().split()
if u>s2:
    print(u[:len(s2)] + s2)
else:
    print(u + s2[:len(u)])
