
def cal(s: str) -> int:
    n = len(s)
    f = [[0] * n for _ in range(n)]
    max_len = 1
    for i in range(n):
        f[i][i] = 1
    for i in range(n-1):
        if s[i] == s[i+1]:
            f[i][i+1] = 2
            max_len = 2
    for l in range(3, n+1):
        for i in range(n-l+1):
            j = i + l - 1
            if s[i] == s[j] and f[i+1][j-1] == l-2:
                f[i][j] = l
                max_len = l
    return max_len

if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        s = input()
        print(cal(s))


        
        