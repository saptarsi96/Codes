t = int(input())
for _ in range(t):
    size = int(input())
    q = input()
    p = 0
    for i in q:
        if i == '1':
            p += 1
    rem_days = 120-size
    if (p+rem_days)/120 >= 0.75:
        print("YES")
    else:
        print("NO")
    