t = int(input())
for t in range(t):
    n,k,s = map(int,input().split())
    restarter = k + n
    backer = k-s + (n-s)+1 +k-1
    print("Case #"+str(t+1)+": "+str(min(backer,restarter)))