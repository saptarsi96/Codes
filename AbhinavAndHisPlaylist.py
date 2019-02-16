t=int(input())
for i in range(t):
    a,b,c=list(map(int,input().split()))
    li=list(map(int,input().split()))
    for i in range(0,len(li)):
        if(li[i]==b):
            li.remove(b)
            li.insert(0,b)
        if(li[i]==c):
            li.remove(c)
            li.insert(len(li),c)
    for i in li:
        print(i,end=" ")


