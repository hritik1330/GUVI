s1 = input()
s2 = list(s1)
oddd = True
for i in range(len(s1)):
    if oddd and s1[i] not in " !@#$'":
        oddd = False
        s2[i] = s1[i].upper()
    else:
        oddd = True

print("".join(s2))
