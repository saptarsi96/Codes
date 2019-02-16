t=int(input())
for i in range(t):
    size=int(input())
    li=list(map(int,input().split()))
    count=0
    valid=False
    for i in li:
        if(i==1):
            count += 1
        if(i==0):
            count -= 1
        if(count>=0):
            valid=True
        if(count<0):
            valid=False
            break
    if(valid==True):
        print("Valid")
    if(valid==False):
        print("Invalid")