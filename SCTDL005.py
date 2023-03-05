from itertools import combinations, permutations

def process(s):
    for i in permutations(s):
         print(''.join(i), end=' ')
    print()


if __name__ == '__main__':
    t = int(input())
    for i in range(t):
        n = int(input())
        s = ''
        for i in range(n):
            s += str(i+1)
        process(s)