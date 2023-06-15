import math

if __name__ == '__main__':
    t = int(input())
    for k in range(t):
        n = int(input())
        a = list(map(int, input().split()))
        
        a.sort()
        x = -1e9
        am = sum([1 for i in a if i < 0])
        for i in range(n):
            if a[i] < 0:
                a[i] = -a[i]
        res = 0
        if am&1:
            res = sum([abs(i) for i in a]) - 2*abs(min(a))
        else:
            res = sum([abs(i) for i in a])
        print(res)