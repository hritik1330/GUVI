import functools
def value(z):
    if (z == 'I'): 
        return 1
    if (z == 'V'): 
        return 5
    if (z == 'X'): 
        return 10
    if (z == 'L'): 
        return 50
    if (z == 'C'): 
        return 100
    if (z == 'D'): 
        return 500
    if (z == 'M'): 
        return 1000

def romanToInt(x,y):
    a = value(x)
    b = value(y)
    if a>b:
        return a+b
    else:
        return b-a
    
a = functools.reduce(romanToInt,input())
print(a)
