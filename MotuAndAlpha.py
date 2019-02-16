t=int(input())
for _ in range(t):
    ans=0
    a,b=list(map(int,input().split()))
    li=[]
    for i in range(a,b+1):
        li.append(hex(i)[2:])
    for i in li:
        if(i.isdigit()==False):
            ans += 1
    print(ans)
