t=int(input())
for _ in range(t):
    a=input()
    s=0
    for i in a:
        if(i.isdigit()):
            s += int(i)
    print(s)