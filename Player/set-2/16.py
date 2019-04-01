import operator
n = int(input())
l = list(map(int,input().split()))
d = dict([])
for z in l:
    if z not in d:
        d[z]=1
    else:
        d[z]+=1
sorted_d = list(sorted(d.items(),key=operator.itemgetter(1)))
print((sorted_d[0])[0])
