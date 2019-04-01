def printcombin(k):
    dpp1 =[[] for i in range(k+1)]
    dpp1[0].append('')
    
    for i in range(1,k+1):
        d = dpp1
        dp1 =[[] for i in range(k+1)]
        dp1[0].append("0"*i)
        for j in range(1,i+1):
            for s in d[j]:
                dpp1[j].append("0"+s)
            for s in d[j-1]:
                dpp1[j].append("1"+s)

    for i in dpp1:
        print(*i,sep="\n")
printcombin(int(input()))
