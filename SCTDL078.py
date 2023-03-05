if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        n, m, k = map(int, input().split())
        nu = n**m
        x = 10**k
        while (nu >= x):
            nu //= 10
        print(nu)
