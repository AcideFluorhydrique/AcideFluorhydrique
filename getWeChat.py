num2char = {
    1: 'a', 2: 'b', 3: 'c', 4: 'd', 5: 'e', 
    6: 'f', 7: 'g', 8: 'h', 9: 'i', 10: 'j',
    11: 'k', 12: 'l', 13: 'm', 14: 'n', 
    15: 'o', 16: 'p', 17: 'q', 18: 'r', 
    19: 's', 20: 't', 21: 'u', 22: 'v', 
    23: 'w', 24: 'x', 25: 'y', 26: 'z', 
    27: '_'
}

def int2str(_input):
    _input = _input.replace(" ", "")
    result = []
    for i in range(0, len(_input), 2):
        num = int(_input[i: i + 2])
        if num in num2char:
            result.append(num2char[num])
        else:
            print("Error!")
            return
    WeChatID = ''.join(result)
    print("My WeChat ID is:", WeChatID)

your_input = input("Enter your answer: ")
int2str(your_input)

