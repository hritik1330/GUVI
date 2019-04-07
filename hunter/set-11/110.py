import re
n = int(input())
l = list(input().split())

for zz in l:
    if zz == "1" or zz == "4" or zz == "78":
        print("+")
    elif "5" == zz[-1] and zz[-2] == "3":
        print("-")
    elif zz[0] == "1" and zz[1] == "9" and zz[2] == "0":
        print("?")
    else:
        print("*")
