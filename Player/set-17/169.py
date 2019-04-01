s = input()
count = 1
previous = s[1]
for u in range(1,len(s)):
    if s[u] == previous:
        count+=1
    else:
        print(previous+str(count),end='')
        previous = s[u]
        count=1
print(previous+str(count))
