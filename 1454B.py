from collections import Counter
t = int(input())
for _ in range(t):
    size = int(input())
    li = list(map(int,input().split()))
    c1 = Counter(li)
    ans = []
    answer = -1
    for i,j in c1.items():
        if j>1:
            pass
        else:
            ans.append(i)
    
           
    if ans == []:
        print(-1)
    else:
        a = min(ans)
        for i in range(0,len(li)):
            if li[i] == a:
                answer = i+1 
        print(answer)
