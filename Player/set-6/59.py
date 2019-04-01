n = int(input())
l = list(map(int,input().split()))
temp_list = []
u = []
for i in l:
    if i:
        temp_list.append(i)
    else:
        u+=temp_list
        temp_list = []

print(*u)
