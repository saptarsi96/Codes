def ice_cream(li,total):
    for i in range(len(li)):
        for j in range(1,len(li)):
            if(li[i]+li[j]==total):
                if(i!=j):
                    return(i+1,j+1)
t=int(input())
for _ in range(t):
    total=int(input())
    size=int(input())
    li=list(map(int,input().split()))
    result_arr = icecream(flavors, m)
    print (result_arr[0]+1, result_arr[1]+1)
    
     