def digitSum(u):
    if u == 0:
        return 0
    if u%2:
        return u%10 + digitSum(u//10)
    else:
        return digitSum(u//10)
if digitSum(int(input()))%2:
    print('O')
else:
    print('E')
