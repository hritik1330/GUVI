n = int(input())
l = list(map(int,input().split()))

l = list(filter(lambda u : u%2, l))
print("odd" if len(l) else "odd")
