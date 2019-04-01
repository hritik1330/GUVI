def countOccurance(s,u):
    print(s)
    count = 0
    for i in s:
        if i==u:
            count+=1
    return count

sentense = input()
word = input()
print(countOccurance(sentense,word))
