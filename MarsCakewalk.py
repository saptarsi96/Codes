size=int(input())
li=list(map(int,input().split()))
li.sort(reverse=True)
sum_=0
for i in range(0,size):
    sum_ += li[i]*pow(2,i)
print(sum_)