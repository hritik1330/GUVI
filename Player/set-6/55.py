s1,u = input().split()
def sameOrNot(s1,u):
    for i in range(len(s1)):
        if s1[i]!=u[i]:
            return "no"
    return "yes"

print(sameOrNot(s1,u))
