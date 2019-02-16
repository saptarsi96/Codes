m,n=list(map(int,input().split()))
li=[]
for i in range(m):
    a=input()
    b=int(a,2)
    li.append(b)
print(li.index(max(li))+1)