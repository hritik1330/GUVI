def diffK(str1,str2,k):
    u= 0
    for i in range(len(str1)):
        if u==k:
            return "no"
        if str1[i]!=str2[i]:
            u-=1
    return "yes"

str1,str2,k = input().split()
print(diffK(str1,str2,int(k)))

