a,b,m=input().split()
a=int(a)
b=int(b)
m=int(m)
count=0
for i in range(a,b+1):
    i=str(i)
    c=i[::-1]
    i=int(i)
    c=int(c)
    d=(i-c)/m
    if d.is_integer():
        count+=1
print(count)
    
