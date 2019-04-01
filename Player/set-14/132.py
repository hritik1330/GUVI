import re
u = input()
r = list(map(lambda x: x.group(),re.finditer('([02468][13579])*|([13579][02468])*',u)))
print(len(max(r)))
