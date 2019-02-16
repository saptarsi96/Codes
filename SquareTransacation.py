def answer(li,s):
    sum_=0
    for i in range(0,len(li)):
        sum_ += li[i]
    if(sum_ >= s):
        return i+1
    return -1


size=int(input())
li=list(map(int,input().split()))
t=int(input())
for _ in range(t):    
    s=int(input())
    ans=answer(li,s)
    print(ans)
    


    