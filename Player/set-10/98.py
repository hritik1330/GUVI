u,k = map(int,input().split())
while u>0:
    if u%10>k :
        print('no')
        break
    u = u//10
else:
    print('yes')
