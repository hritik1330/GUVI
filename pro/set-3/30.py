def checkDivisiblit(y):
  if not int(y)%8:
    return True
  return False

def check(s):
  for i in range(len(s)):
    if checkDivisiblit(s[i]):
      return True
  for i in range(len(s)):
    for j in range(i+1,len(s)):
      if checkDivisiblit(s[i]+s[j]):
        return True
  for i in range(len(s)):
    for j in range(i+1,len(s)):
      for k in range(j+1,len(s)):
        if checkDivisiblit(s[i]+s[j]+s[k]):
          return True
  return False

s = input()
if check(s):
  print("YES")
else:
  print("NO")
