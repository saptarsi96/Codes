t=int(input())
for i in range(0,t):
    size=int(input())
    a=list(map(int,input().split()))
    a.sort()
    mini=a[1]-a[0]
    for i in range(size-1):
        if(a[i+1]-a[i]<mini):
            mini=a[i+1]-a[i]
    print(mini)
