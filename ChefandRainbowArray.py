t=int(input())
for i in range(0,t):
    size=int(input())
    li=list(map(int,input().split()))
    if(sum(set(li))==28 and li==li[::-1]):
        print("yes")
    else:
        print("no")
