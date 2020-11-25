t = int(input())
for _ in range(t):
    size = int(input())
    li = list(map(int,input().split()))
    s = set(li)
    ans = []
    for i in s:
        segments = 0
        for j in range(1,size):
            if li[j] == i and li[j]!=li[j+1]:
                segments += 1
            ans.append(segments+1)

            
            


