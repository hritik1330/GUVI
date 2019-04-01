s = input()
l = [False]*(26)
for u in s:
    if l[ord(u)-97]==False:
        l[ord(u)-97]=True
        print(u,end="")
