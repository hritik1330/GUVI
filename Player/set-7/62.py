u = int(input())
min = 1
while min<u:
    if (u//min)%2 != 0 and u%min==0:
        break
    min += 1
print(min)
