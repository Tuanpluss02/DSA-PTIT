def conv(suffix):
    stack = []
    
    for token in suffix:
        if token.isalnum():
            stack.append(token)
        else:
            operand2 = stack.pop()
            operand1 = stack.pop()
            new_expression = '(' + operand1 + token + operand2 + ')'
            stack.append(new_expression)
    
    return stack[0]




if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        a = str(input())
        # print(a,b)
        print(conv(a))
        