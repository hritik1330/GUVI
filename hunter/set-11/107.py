def pallin_length( center, diff, string):
    if center-diff == -1 or center+diff == len(string) or string[center-diff] != string[center+diff] :
        return 0
    return 1 + pallin_length(center, diff+1, string)

def pallin_string( input_string ):
    z = 0    
    new_input_string = ""

    for i in input_string[:len(input_string)-1] :
        new_input_string += i + "|"
    new_input_string += input_string[-1]

    for i in range(len(new_input_string)) :
        length = pallin_length(i, 1, new_input_string)

        if z < length :
            z = length
            start = i
    
    return z


if __name__ == '__main__':
    n = input()
    print(pallin_string(n))
