t = int(input())
for _ in range(t):
    N,k = list(map(int,input().split()))
    A= [0]*N
    if N%2==0:
        for i in range(0,N):
            if i%2==0:
                A[i] = (i+1)*(-1)
            else:
                A[i] = i+1
    else:
        for i in range(0,N):
            if i%2==0:
                A[i] = i+1
            else:
                A[i] = (i+1)*(-1)
    def helper(A,k):
        cnt = 0
        s = 0
        for i in A:
            s += i
            if(s>0):
                cnt += 1
        while(True):
            if(cnt>k):
                for i in range(N-1,-1,-2):
                    A[i] = A[i]*(-1)
                    cnt -= 1
                    if(cnt==k):
                        return
            else:
                for i in range(0,N):
                    if (A[i]<0):
                        A[i] = A[i] * (-1)
                        cnt += 1
                    if cnt==k:
                        return
    helper(A,k)
    for i in A:
        print(i,end=" ")
    
    

