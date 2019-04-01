def removeVowel(c):
    return c not in 'aeiouAEIOU'
z = int(input())
l = list(filter(removeVowel, input()))
print("".join(l[::-1]))
