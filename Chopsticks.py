n,d=map(int,input().split())
l=[]
for _ in range(n):
    l.append(int(input()))
l.sort()
c=0
i=0
while(i<len(l)-1):
    if(l[i+1]-l[i]<=d):
        c+=1
        i+=2
    else:
        i+=1    
print(c)
    
