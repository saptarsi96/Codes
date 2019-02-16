t=int(input())
c=0
for i in range(t):

    a,b,c=list(map(int,input().split()))
    if((b**2-(4*a*c))>0):
        c+=1
print(c)