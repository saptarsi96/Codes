size,target = map(int,input().split())
li = list(map(int,input().split()))
profit = []

for _ in range(target):
    q = int(input())
    start = -1
    end = 99999
    for i in range(0,size):
        for j in range(i+1,size):
            if li[j] == li[i]+q :
                if max(start,i+1) > min(end,j+1):
                    continue
                else:
                    start = max(start,i+1)
                    end = min(end,j+1)
    if start>0 and end>0:
        print(start,end)
    else:
        print(-1)



    
    
    
    
    
    
    
    
    
    
    






    
    '''
    ans = []
    for i in range(0,size):
        for j in range(i+1,size):
            if (li[j]-li[i]) == q:
                ans.append((i+1,j+1))
    temp = {}
    for x,y in ans:
        if y in temp:
            temp[y].append(x)
        else:
            temp[y] = [x]
    print(temp)
    for i,j in temp.items():
        if len(j)>1:
            print(j[-1],i)
            break
        else:
            res = min(ans,key=lambda sub: abs(sub[1]-sub[0]))
            print(res)




    #res = min(ans,key=lambda sub: abs(sub[1]-sub[0]))
    #profit.append(res)
'''
            

