def countOccurance(s,u):
    count = 0
    for i in range(len(s)):
        if s[i]==u:
            count+=1
    return count

s,u = input().split()
print(countOccurance(s,u))
