l = list(input())
u = 0
if len(l)%2:
    print("no")
elif l[0]==')' or l[-1]=='(':
    print("no")
else:
    for i in range(len(l)):
        if l[i]=='(':
            u+=1
        else:
            u-=1
    if u:
        print("no")
    else:
        print("yes")

