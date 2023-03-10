import math


def cal(n):
    dp = [float('inf')]*(n+1)
    dp[0] = 0

    for i in range(1, n+1):
        for j in range(1, int(math.sqrt(i))+1):
            dp[i] = min(dp[i], dp[i-j*j]+1)

    return dp[n]


if __name__ == '__main__':
    t = int(input())
    l = list(map(int, input().split()))
    for i in range(t):
        print(cal(l[i]), end=' ')
