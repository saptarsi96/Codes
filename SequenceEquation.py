n=int(input())
li1=list()
li=list(map(int,input().split()))
for i in range(1,n+1):
    b=li.index(i)
    b=b+1
    c=li.index(b)
    c=c+1
    li1.append(c)
for i in li1:
    print(i)
