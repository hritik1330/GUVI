import math as m
def digitsum(x):
  if x<=9:
    return x
  return x%10 + digitsum(x//10)

def printPossibleWays(n):
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


printPossibleWays(int(input()))
