s1 = input()
s2 = list(s1)
odd = True
for i in range(len(s1)):
    if odd and s1[i] not in " !@#$'":
        odd = False
        s2[i] = s1[i].upper()
    else:
        odd = True

print("".join(s2))
