s11 = input()
s22 = input()

s3 = ''
for i in range(len(s11)):
    d = ord(s11[i]) + ord(s22[i]) - 194
    s3 += chr( 98 + d%26)

print(s3)
