s1,s2 = input().split()
for u in range(len(s1)):
    if s1[u]==s2[u]:
        print("yes")
        break
else:
    print("no")
