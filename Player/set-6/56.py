s,u = input().split()
def firstPosition(s,u):
    for i in range(len(s)):
        if s[i]==u:
            return i+1
    return "yes"

print(firstPosition(s,u))
