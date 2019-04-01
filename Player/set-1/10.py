def diffOne(s1,s2):
    z = 2
    for i in range(len(s1)):
        if s1[i]!=s2[i] and z:
            z-=1
        if not z:
            return "no"
    return "yes"

s1, s2 = list(input().split())
print(diffOne(s1,s2))
