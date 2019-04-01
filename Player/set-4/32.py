n,k = map(int,input().split())
u = list(map(int,input().split()))

def binary_search(u,l,r,x):
    if r>l:
        mid = (r+l-1)//2
        if u[mid]==x:
            return "yes"
        elif u[mid]<x:
            return binary_search(u,mid+1,r,x)
        else:
            return binary_search(u,l,mid-1,x)
    return "no"

print(binary_search(u,0,n-1,k))
