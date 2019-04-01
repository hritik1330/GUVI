z = input()
b = input()

x = min(len(z), len(b))
for i in range(x):
    print(b[i]+z[i])

for i in range(x, len(z)):
    print(z[i])

for i in range(x, len(b)):
    print(b[i])
