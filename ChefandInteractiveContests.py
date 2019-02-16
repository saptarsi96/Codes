m,n=list(map(int,input().split()))
for i in range(m):
    a=int(input())
    if(a>=n):
        print("Good boi",flush=True)
    if(a<n):
        print("Bad boi",flush=True)
