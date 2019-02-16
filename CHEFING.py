t=int(input())
li=[]
for _ in range(t):
    size=int(input())
    s = set(input())
    for _ in range(size-1):
        s = s.intersection(input())

    print(s.__len__())