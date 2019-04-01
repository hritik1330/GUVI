import math as m
def digitsum(y):
  if y<=9:
    return y
  return y%10 + digitsum(y//10)

def printpossibleways(n):
  start = n - min(n,9*m.ceil(m.log10(n)))
  l = []
  for i in range(start, n):
    if i+digitsum(i) == n:
      l.append(i)

  if len(l):
    print(len(l))
    print(*l, sep="\n")
  else:
    print("-1")


printpossibleways(int(input()))
