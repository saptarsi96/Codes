n = input()
n = int(n)
multiplicand = [-1] * n
mid = n//2
start = 0
idx = 0
end = n
if n%2 == 0:
    while multiplicand[mid-1] == -1:
        multiplicand[idx] = start
        start += 2
        idx += 1
    start -= 1
    while multiplicand.count(-1)>0:
        multiplicand[idx] = start
        start -= 2
        idx += 1
else:
    while multiplicand[mid] == -1:
        multiplicand[idx] = start
        start += 2
        idx += 1
    start = multiplicand[idx-1] - 1
    while multiplicand.count(-1)>0:
        multiplicand[idx] = start
        start -= 2
        idx += 1
ans = []
for i in range(n):
    for j in multiplicand:
        ans.append(n*j+i+1)
ans = [ans[i:i+n] for i in range(0, len(ans), n)]
for i in ans:
    print(i)
