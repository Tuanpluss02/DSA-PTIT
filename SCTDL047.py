

def cal(n):
    num_sevens = n // 7
    num_fours = 0
    while num_sevens >= 0:
        num_fours = n - num_sevens * 7
        if num_fours % 4 == 0:
            num_fours //= 4
            break
        num_sevens -= 1
    if num_sevens < 0:
        return -1
    return '4' * num_fours + '7' * num_sevens

if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        n = int(input())
        print(cal(n))
        
        
        

        
        