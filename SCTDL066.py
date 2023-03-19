
def cal(N: int, K: int) -> int:
    MOD = 10**9 + 7
    f = [0] * (N+1)
    f[0] = 1
    for i in range(1, N+1):
        for j in range(1, K+1):
            if i >= j:
                f[i] = (f[i] + f[i-j]) % MOD
    return f[N]

if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        n,k = map(int, input().split())
        print(cal(n,k))


        
        