u = int(input())
s = u%10
u //= 10
while u>9:
    x = u%10
    u = u//10
print(s+u)
