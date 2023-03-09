
if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        k, n, m = map(int, input().split())
        a = int(str(n), k) + int(str(m), k)
        print(bin(a)[2:])
