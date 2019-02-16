t=int(input())
for i in range(t):
    n=int(input())
    a=input()
    h=0
    flag=1
    for j in range(n):
        if(a[j]=='+'):
            h=h+1
        else:
            h=h-1
        if(h<0):
            flag=0
            print('FIND A NEW JOB')
            break
    if(flag==1):
        print('MAYBE YOU ARE SAFE')
