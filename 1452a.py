t = int(input())
for _ in range(t):
    a,b = map(int,input().split())
    if a==b:
        print(a+b)
    else:
        m = max(a,b)
        m += m-1
        print(m)