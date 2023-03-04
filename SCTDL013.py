from itertools import combinations


if __name__ == '__main__':
    n = int(input())
    for _ in range(n):
        n,k = map(int, input().split())
        s = [int(x) for x in range(1, n+1)]
        l = list(combinations(s, k))
        for i in l:
            print(*i, sep='', end=' ')
        print()
