u = set(input())
n2 = set(input())
if len(u.union(n2))==26:
    print("complementary")
else:
    print("non-complementary")
