def count1(u):
    if u==0:
        return 0
    return u%2 + count1(u//2)
print(count1(int(input())))
