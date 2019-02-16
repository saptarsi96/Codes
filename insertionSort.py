size=int(input())
li=list(map(int,input().split()))
for i in range(size):
    if(li[i+1]<li[i]):
        c=li[i+1]
        li.remove(c)
        li.append(li[-1])
        print(li)