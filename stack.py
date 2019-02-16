s1=[]
s2=[]
a=list(map(int,input().split()))
for i in a:
    s1.append(i)
#print(s1)
while(len(s1)>0):
    p=s1.pop()
    s2.append(p)
print("The queue is ",s2[::-1])
