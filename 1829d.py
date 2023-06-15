def back(n,k):
    if  n == k:   
        return True
    if n < k:
        return False
    if n % 3 == 0:
        return back(n//3,k) or back(2*n//3,k)
    return False

t = int(input())
for _ in range(t):
    n,k = map(int,input().split())

    if back(n,k):
        print("YES")
    else:
        print("NO")