n = int(input())
l = map(int,input().split())

even = 0
odd = 1
evencount = 0

for u in l:
    if u%2:
        odd = u
    else:
        even = u
        evencount += 1
if evencount == 1:
    print(even)
else:
    print(odd)
