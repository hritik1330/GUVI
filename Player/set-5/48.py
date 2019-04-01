u = int(input())
for i in range(1,u,2):
    if not u%i:
        print(i,end=" ")
