

if __name__ == '__main__':
    t = int(input())
    for k in range(t):
        n = int(input())
        s = str(input())
        x, y = 0, len(s)-1
        res = len(s)
        while s[x] == '0' and s[y] == '1' or s[x] == '1' and s[y] == '0':
            res -= 2
            x += 1
            y -= 1
            if x > y:
                break
        print(res)
