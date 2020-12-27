
import math
t = int(input())
for _ in range(t):
    m,n = list(map(int,input().split()))
    ans = "a"*n
    req_dig = math.ceil(m//2)
    ans += "bca"*req_dig
    ans = ans[:m]
    print(ans)