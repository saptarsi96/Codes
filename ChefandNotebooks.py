t=int(input())

for i in range(0,t):
    bool=False
    X,Y,K,N=list(map(int,input().split()))
    for j in range(N):
        P, C=map(int, input().split())
        if K>=C and  (X-Y) <= P:
            bool=True
    if bool:
        print("LuckyChef")
    else:
        print("UnluckyChef")
