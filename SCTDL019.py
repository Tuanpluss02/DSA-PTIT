def next_per(arr, n):
    i = n - 1
    while i > 0 and arr[i - 1] >= arr[i]:
        i -= 1
    if i <= 0:
        print(*arr[::-1], end=" \n")

    else:
        j = n - 1
        while arr[j] <= arr[i - 1]:
            j -= 1
        arr[i - 1], arr[j] = arr[j], arr[i - 1]
        arr[i:] = arr[n - 1:i - 1:-1]
        for i in arr:
            print(i, end=" " if i != arr[-1] else " \n")


if __name__ == '__main__':
    t = int(input())
    for i in range(t):
        n = int(input())
        arr = list(map(int, input().split()))
        next_per(arr, n)
