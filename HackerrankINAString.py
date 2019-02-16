import sys


q = int(input().strip())
for a0 in range(q):
    s = input().strip()
    gs = 'hackerrank'
    p = 0
    for l in s:
        if l == gs[p]:
            p += 1
        if p == len(gs):
            break
    if p == len(gs):
        print('YES')
    else:
        print('NO')
