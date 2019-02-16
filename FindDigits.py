t=int(input())
for i in range(t):
    num=int(input())
    count=0
    s=str(num)
    for i in range(0,len(s)):
        if(int(s[i])!=0):
            if(num%int(s[i])==0):
                count+=1
    print(count)
