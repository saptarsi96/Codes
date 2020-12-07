t = int(input())
for _ in range(t):
    size = int(input())
    ans = 0
    li = list(map(int,input().split()))
    li.append(0)
    for i in range(1,size+1):
        while(li[i]!=0):
            li[i] = li[i-1]+li[i]-1
            ans += 1
    print(ans)