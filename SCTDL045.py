import heapq

def check(s):
    n = len(s)
    if n < 2:
        return 1
    
    count = [0] * 26
    for i in range(n):
        count[ord(s[i]) - ord('a')] += 1
    
    pq = []
    for i in range(26):
        if count[i] > 0:
            heapq.heappush(pq, (-count[i], chr(i + ord('a'))))
    
    prev_count, prev_char = heapq.heappop(pq)
    prev_count *= -1
    while pq:
        curr_count, curr_char = heapq.heappop(pq)
        curr_count *= -1
        
        if prev_count > n // 2:
            return -1
        
        for i in range(min(prev_count, curr_count)):
            s = s[:2*i] + prev_char + s[2*i:]
            s = s[:2*i+1] + curr_char + s[2*i+1:]
            n = len(s)
        
        prev_count = prev_count - min(prev_count, curr_count)
        if prev_count > 0:
            heapq.heappush(pq, (-prev_count, prev_char))
        
        prev_count, prev_char = curr_count, curr_char
    
    if prev_count > n // 2:
        return -1
    
    return 1

if __name__ == '__main__':
    t = int(input())
    for _ in range(t):
        s = input()
        print(check(s))