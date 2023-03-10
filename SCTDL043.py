def cal(acts):
    tmp = sorted(acts, key=lambda x: x[1])
    select = []
    for action in tmp:
        if not select or action[0] >= select[-1][1]:
            select.append(action)

    return len(select)


if __name__ == '__main__':
    t = int(input())
    for _ in range(t):
        n = int(input())
        a = list(map(int, input().split()))
        b = list(map(int, input().split()))
        acts = [(a[i], b[i]) for i in range(n)]
        print(cal(acts))
