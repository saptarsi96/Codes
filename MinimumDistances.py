n=int(input())
li=list(map(int,input().split()))
li1=list()
li2=list()
for i in li:
    if(li.count(i)>1):
        li1.append(i)
for i in li1:
    if(li1.count(i)>1):
        li1.remove(i)
for i in range(0,len(li)):
    for j in li1:
        if(li[i]==j):
            li2.append(i)
        
