t=int(input())
for i in range(t):
    n=int(input())
    a=list(map(int,input().split()))
    sum1=0
    count=0
    for ele in a:
        
        count+=1
        if ele==-1:
            
            v=int(sum1/(count-1))
            print(v,end=" ")
            sum1+=v
        else:
            sum1+=ele
            print(ele,end=" ")

    print("")    
