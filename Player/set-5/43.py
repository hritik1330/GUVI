def isSubStr(u, str2):
    s2 = len(str2)
    for i in range(len(u)-len(str2)):
        if u[i:s2+i]==str2:
            return "yes"
    return "no"

u, str2 = input().split()
print(isSubStr(u,str2))
