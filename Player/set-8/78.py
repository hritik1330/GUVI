n,m = map(int,input().split())
l1 = list(map(int,input().split()))
l2 = list(map(int,input().split()))

u = 0;j = 0
while u<n and j<m:
    if l1[u]<=l2[j]:
        print(l1[u], end=' ')
        u+=1
    else:
        print(l2[j], end=' ')
        j+=1
while u<n:
    print(l1[u], end=' ')
    u+=1
while j<m:
    print(l2[j], end=' ')
    j+=1
