n = int(input())
l = list(map(int,input().split()))
print(sum(list(filter(lambda u:u<0,l))))
