a=list()
a.append(1)
for i in  range(1,100):
    if(i%2!=0):
        a.append(a[-1]*2)
    if(i%2==0):
        a.append(a[-1]+1)
n=int(input())
for i in range(n):
    x=int(input())
    print(a[x])
