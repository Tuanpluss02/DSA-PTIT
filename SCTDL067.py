
def cal(matrix):
    n = len(matrix)
    m = len(matrix[0])
    dp = [[0] * m for _ in range(n)]
    max_size = 0
    for i in range(n):
        dp[i][0] = matrix[i][0]
        max_size = max(max_size, dp[i][0])
    for j in range(m):
        dp[0][j] = matrix[0][j]
        max_size = max(max_size, dp[0][j])

    for i in range(1, n):
        for j in range(1, m):
            if matrix[i][j] == 1:
                dp[i][j] = 1 + min(dp[i-1][j], dp[i][j-1], dp[i-1][j-1])
                max_size = max(max_size, dp[i][j])

    return max_size


if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        n, m = map(int, input().split())
        matrix = []
        for _ in range(n):
            matrix.append(list(map(int, input().split())))
        print(cal(matrix))
        
        

        
        