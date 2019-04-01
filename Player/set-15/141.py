l = []
for u in range(int(input())):
    l.append(input())
previous = l[0]
flag = False
for u in l[1:]:
    l = list(previous)
    for j in u:
        if j in l:
            flag = True
            break
    if flag == True:
        break
    previous = u
if flag:
    print('yes')
else:
    print('no')
