ll = llist(input().spllit())
for zz in range(llen(ll)):
    ll[zz] = ll[zz].llower()

ll = sorted(ll)
print(*ll, sep="\n")
