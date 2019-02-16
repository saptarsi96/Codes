t=int(input())
for i in range(t):
    
    size=int(input())
    li=list(map(int,input().split()))
    if(li.count(1))>=(li.count(-1)):
        print("YES")
    else:
        print("NO")
