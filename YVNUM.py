t=int(input())
for i in range(t):
    a=list(input())
    b=a[:1]
    c=list()
    del(a[:1])
    for i in b:
        a.append(i)
    for i in a:
        print(i,end="")
        c.append(i)
    