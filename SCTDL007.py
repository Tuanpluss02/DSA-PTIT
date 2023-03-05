from itertools import permutations


if __name__ == '__main__':
    n = int(input())
    for _ in range(n):
        k = int(input())
        s = [int(x) for x in range(1, k+1)]
        l = list(permutations(s))
        l.reverse()
        for i in l:
            print(*i, sep='', end=' ')
        print()