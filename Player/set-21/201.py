def catalan(n): 
    if n <=1 : 
        return 1 
    res = 0 
    for u in range(n): 
        res += catalan(u) * catalan(n-u-1)   
    return res 

for u in range(int(input())+1):
    print(catalan(u),end=" ")
