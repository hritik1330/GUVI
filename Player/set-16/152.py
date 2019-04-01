s = input()
vowels = 0
u = 0
for i in s:
    if i in ['a','e','i','o','u']:
        vowels+=1
    else:
        u += 1
if vowels>u:
    print(2*u+1)
elif u>vowels :
    print(2*u+1)
else:
    print(2*u)
