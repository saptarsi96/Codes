import math
t=int(input())
for _ in range(t):
    n,a,b,k=list(map(int,input().split()))
    c =0;d=0
    lcm=abs(a*b)//math.gcd(a,b)
    e=(n//a+n//b-2*(n//lcm))
    if(e>=k):
        print('Win')
    else:
        print('Lose')
