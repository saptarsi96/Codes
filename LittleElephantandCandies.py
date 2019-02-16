t=int(input())
for i in range(0,t):
    m,n=list(map(int,input().split()))
    a=list(map(int,input().split()))
    if(n>=sum(a)):
        print("Yes")
    else:
        print("No")
