t = int(input())
for _ in range(t):
    size = int(input())
    li = list(map(int,input().split()))
    ans = [0]*size
    left = 0
    right = size-1
    ptr = 0
    while(left<=right):
        try:
            ans[ptr] = li[left]
            left += 1
            ptr += 1
            ans[ptr] = li[right]
            right -= 1
            ptr += 1
        except:
            pass
    for i in ans:
        print(i,end=" ")