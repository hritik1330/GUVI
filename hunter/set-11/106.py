zz = input()
bb = input()

x = min(len(zz), len(bb))
for i in range(x):
    print(bb[i]+zz[i])

for i in range(x, len(zz)):
    print(zz[i])

for i in range(x, len(bb)):
    print(bb[i])
