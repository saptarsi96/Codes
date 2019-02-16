n,k=list(map(int,input().split()))
li=[]
for i in range(n):
    li.append(int(input()))
c=0
for i in li:
    if(i%k==0):
        c += 1
print(c)