a,b,c=list(map(int,input().split()))
li=list(map(int,input().split()))
#index=int(input())
for _ in range(b):
    d=li[:b]
    del(li[:b])
    for i in d:
        li.append(i)
for _ in range(c):
    index=int(input())
    print(li[index])