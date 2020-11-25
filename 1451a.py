def divisors(n,ans):
    ans += 1
    if n == 1:
        return ans

    for i in range(n//2,1,-1):
        if n%i==0:
            divisors(n//i,ans)
        else:
            divisors(n-1,ans)




t = int(input())
for _ in range(t):
    q = int(input())
    ans = 0
    answer = divisors(q,ans)
    print(answer)