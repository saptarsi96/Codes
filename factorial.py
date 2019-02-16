def factorial(n):
    if(n==1):
        return 1
    else:
        
        f=1
        if(n<len(li)):
            return(li[n-1])
        else:
            for i in range(1,n+1):
                f=f*i
                li.append(f)
            return li[n-1]


import time
t=int(input())
for i in range(t):
    
    a=int(input())
    li=list()
    start = time.clock()
    print(factorial(a))
    end = time.clock()
    print(end - start)
    