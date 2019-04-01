u = int(input())
l = []
while u>0:
    x = u%10
    u = u//10
    if x not in l:
        l.append(x)
    else:
        print('yes')
        break
else:
    print('no')
