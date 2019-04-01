n = int(input())
l = list(map(int,input().split()))

l = list(filter(lambda u : u<0, l))
print(0 if len(l) else sum(l))
