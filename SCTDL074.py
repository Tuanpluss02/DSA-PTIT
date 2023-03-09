def pro(A, B):
    n = len(A)
    m = len(B)
    
    union = []
    intersection = []
    
    i = j = 0
    while i < n and j < m:
        if A[i] == B[j]:
            union.append(A[i])
            intersection.append(A[i])
            i += 1
            j += 1
        elif A[i] < B[j]:
            union.append(A[i])
            i += 1
        else:
            union.append(B[j])
            j += 1
    
    while i < n:
        union.append(A[i])
        i += 1
        
    while j < m:
        union.append(B[j])
        j += 1
    
    print(*union, end = " \n")
    print(*intersection, end = " \n")

if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        n,m = map(int, input().split())
        A = list(map(int, input().split()))
        B = list(map(int, input().split()))
        pro(A, B)
        