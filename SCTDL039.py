def process(n: int, l: list):
    l.sort()
    res = 0
    for i in range(1, n):
        res += (l[i] * i) % 1000000007
    return res % 1000000007


if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        n = int(input())
        l = list(map(int, input().split()))
        print(process(n, l))
