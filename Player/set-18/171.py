s = list(input().split())
for u in range(1,len(s)-1):
    if s[u] == "and":
        s[u-1],s[u+1] = s[u+1],s[u-1]
print(*s)
