t=int(input())
for i in range(t):
    num=int(input())
    if(num==0):
        print(1)
    ans=1
    for i in range(1,num+1):
        ans *= i
    print(ans)
