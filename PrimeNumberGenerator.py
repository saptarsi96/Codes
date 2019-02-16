t=int(input())
for i in range(0,t):
    m,n=map(int,input().split())
    for num in range(m,n+1):
        if num>1:
            for i in range(2,num):
                if(num%i)==0:
                    break
            else:
                print(num)
