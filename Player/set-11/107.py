s = input()
x = input()

for u in range(len(s)):
    if s[u] == x[0]:
        j = 1
        while j<len(x):
            if s[u+j] == x[j]:
                j+=1
            else:
                break
        if j==len(x):
            print(u+1)
            break
