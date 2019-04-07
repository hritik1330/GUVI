def g_c_d(z,m):
    if m == 0:
        return z
    return g_c_d(m, z%m)

z,m = map(int,input().split())
if g_c_d(z,m)==1:
    print("Yes")
else:
    print("No")
