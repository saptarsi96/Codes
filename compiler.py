s = []
t = int(input())
for it in range(t):
    st = input()
    ans = 0
    tmp = 0
    n = len(st)
    for i in range(n):
        if st[i] == '<':
            s.append(st[i])
        else:
            if len(s) > 0:
                s.pop()
                tmp += 2
                if len(s) == 0:
                    ans += tmp
                    tmp = 0
            else:
                break
    print(ans)
    while len(s) > 0:
        s.pop()