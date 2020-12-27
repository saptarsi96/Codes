t = int(input())
for _ in range(t):
    size = int(input())
    q = input()
    a = []
    for i in q:
        a.append(i)
    b = input()
    for _ in range(size):
        for i in range(size-1):
            if a[i] == '1' and a[i+1] == '0':
                a[i],a[i+1] = a[i+1],a[i]
    a = "".join(a)
    if(a==b):
        print('Yes')
    else:
        print('No')




