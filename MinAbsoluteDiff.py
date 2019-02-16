size=int(input())
li=list(map(int,input().split()))
li.sort()
min=li[-1]-li[0]
for i in range(1,size):
    if li[i]-li[i-1]<min:
        min=li[i]-li[i-1]
print(min)