a=int(input())
li_a=list(map(int,input().split()))

    


b=int(input())
li_b=list(map(int,input().split()))

li_c=[]
li_a.sort()
li_b.sort()
c=abs(li_a[0]-li_b[0])
d=abs(li_a[-1]-li_b[-1])
for i in range(c,d+1):
    li_c.append(i)
for i in li_c:
    print(i,end=" ")