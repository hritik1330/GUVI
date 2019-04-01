import re
n = int(input())
l = list(input().split())

for z in l:
    if z == "1" or z == "4" or z == "78":
        print("+")
    elif "5" == z[-1] and z[-2] == "3":
        print("-")
    elif z[0] == "1" and z[1] == "9" and z[2] == "0":
        print("?")
    else:
        print("*")
