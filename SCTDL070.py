

if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        C, N = map(int, input().split())
        w = [0] * (N+1)
        for i in range(1, N+1):
            w[i] = int(input())
        dp = [[0] * (N+1) for i in range(C+1)]
        for i in range(1, C+1):
            for j in range(1, N+1):
                dp[i][j] = dp[i][j-1]
                if i >= w[j]:
                    dp[i][j] = max(dp[i][j], dp[i-w[j]][j-1] + w[j])
        print(dp[C][N])
