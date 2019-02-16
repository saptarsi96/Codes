t=int(input())
for i in range(t):
    a=list()
    m,n=list(map(int,input().split()))
    for i in range(n):
        if(i%m==0):
            a.append(i)
    print(sum(a))
        
