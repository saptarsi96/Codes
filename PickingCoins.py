t=int(input())
for _ in range(t):
    total,divisor=list(map(int,input().split()))
    li=[]
    for i in range(1,100):
        li.append(pow(divisor,i))
        li.append(pow(divisor,i))
    sum_=0
    bob=False
    alice=False
    for i in range(len(li)):
        sum_ += li[i]
        if(sum_>total):
            if((i-1)%2)!=0:
                bob=True
                break
            if(i-1)%2==0:
                alice=True
                break
    if(bob):
        print("Bob")
    if(alice):
        print("Alice")



