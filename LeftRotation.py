m,n=list(map(int,input().split()))
a=list(map(int,input().split()))
b=a[:n]
del a[:n]
for i in b:
    a.append(i)
for i in a:
    print(i,end=" ")

