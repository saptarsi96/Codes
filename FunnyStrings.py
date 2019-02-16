t=int(input())
for i in range(t):
    b=[ord(i) for i in input()]
    d=b[::-1]
    #print(b, d)
    c = b[0]
    z = []
    for i in range(1, b.__len__()):
        z.append(abs(c - b[i]))
    y = []
    v = d[0]
    for i in range(1, d.__len__()):
        y.append(abs(v - d[i]))
    #print(y,z)
    if y == z:
        print('Funny')
    else:
        print('Not Funny')
