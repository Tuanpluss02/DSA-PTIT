t = int(input())
for _ in range(t):
    n = int(input())
    dic: dict[str, int] = {}
    dic = {'00': 1e9, '10': 1e9, '01': 1e9, '11': 1e9}
    for i in range(n):
        co, st = input().split()
        dic[st] = min(dic[st], int(co))
    if(min(dic['11'], dic['10'] + dic['01']) > 1e6):
        print("-1")
    else:
        print(min(dic['11'], dic['10'] + dic['01']))
