

if __name__ == '__main__':
    t = int(input())
    for k in range(t):
        n = int(input())
        s = str(input())
        x, y = 0, 0
        ok = False
        for i in range(n):
            if s[i] == 'L':
                x -= 1
            elif s[i] == 'R':
                x += 1
            elif s[i] == 'U':
                y += 1
            else:
                y -= 1
            if x == 1 and y == 1:
                ok = True
                break
        if ok:
            print("YES")
        else:
            print("NO")
