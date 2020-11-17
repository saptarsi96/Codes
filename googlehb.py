def boring(num):
    num = [int(x) for x in str(num)]
    flag = True
    for i in range(0,len(num),2):
        if num[i]%2 != 1:
            flag = False
    for i in range(1,len(num),2):
        if num[i]%2 != 0:
            flag = False
    return flag

t = int(input())
for i in range(t):
    l,r = map(int,input().split())
    ans = 0
    for test in range(l,r+1):
        if(boring(test)):
            ans += 1
    print("Case #"+str(i+1)+": "+str(ans))

