s1 = input()
possibility = False

for i in range(1,len(s1)):
    if s1[-i] > s1[-i-1]:
        possibility = True
        s2 = list(s1)
        s2[-i], s2[-i-1] = s2[-i-1], s2[-i]
        break

if possibility:
    print("".join(s2))
else:
    print(-1)
