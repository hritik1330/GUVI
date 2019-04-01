def isNum(y33):
    for i in y33:
        if ord(i)<48 or ord(i)>57:
            return "no"
    return "yes"

print(isNum(input()))
