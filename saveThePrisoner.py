t=int(input())
for i in range(t):
    a,b,c=list(map(int,input().split()))
    d=b%a
    print(c+d-1)