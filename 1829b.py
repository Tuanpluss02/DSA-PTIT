t = int(input())
for _ in range(t):
    n = int(input())
    l = list(map(int,input().split()))
    res = -1e9
    tmp = 0
    for i in range(n-1):
        if l[i] == 0 and l[i] == l[i+1]:
            tmp += 1
        elif l[i] != l[i+1]:
            res = max(res,tmp)
            tmp = 0
    res = max(res,tmp)
    if res == 0:
        print(1 if 0 in l else 0)
        continue
    print(res +1)
        
        