s = input()
v=''
c=''
for u in s:
    if u in ('a','e','u','o','u'):
        c+=u
    else:
        v+=u
print(c+v)
