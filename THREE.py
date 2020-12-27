from collections import Counter
t = int(input())
for _ in range(t):
    q = input()
    c1 = Counter(q)
    pairs = 0
    x = len(q)//3
    ans = 0
    for i,j in c1.items():
        if j >= 2:
            pairs += j//2
    ans = min(pairs,x)
    print(ans)
