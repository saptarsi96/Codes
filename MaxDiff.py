t=int(input())
for i in range(t):
    size,son=list(map(int,input().split()))
    li=list(map(int,input().split()))
    li.sort()
    if(son>size-son):
        son=size-son
    li2=li[:son]
    li3=li[son:]
    print(abs(sum(li3)-sum(li2)))