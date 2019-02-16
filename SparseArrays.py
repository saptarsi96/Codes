a=list();b=list()
n=int(input())
for i in range(n):
    a.append(input())
m=int(input())
for i in range(m):
    b.append(input())
for i in b:
    print(a.count(i))
