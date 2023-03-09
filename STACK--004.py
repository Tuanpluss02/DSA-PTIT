def conv(infix):
    precedence = {'+': 1, '-': 1, '*': 2, '/': 2, '^': 3}
    output = ''
    stack = []
    
    for token in infix:
        if token.isalnum():
            output += token
        elif token in precedence:
            while stack and stack[-1] != '(' and precedence.get(stack[-1], 0) >= precedence[token]:
                output += stack.pop()
            stack.append(token)
        elif token == '(':
            stack.append(token)
        elif token == ')':
            while stack and stack[-1] != '(':
                output += stack.pop()
            if stack and stack[-1] == '(':
                stack.pop()
    
    while stack:
        output += stack.pop()
    
    return output



if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        a = str(input())
        # print(a,b)
        print(conv(a))
        