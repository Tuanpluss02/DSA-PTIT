if __name__ == '__main__':
    n = int(input())
    for _ in range(n):
        k = int(input())
        for i in range(2**k):
            s = str(bin(i)[2:].zfill(k))
            print(s.replace('0', 'A').replace('1', 'B'), end=' ')
        print()