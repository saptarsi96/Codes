d1,v1,d2,v2,p = list(map(int,input().split()))
days = 1
sum = 0
while(sum<p):
    if days<d1 and days<d2:
        sum += 0
    elif days>= d1 and days<d2:
        sum += v1
    elif days>=d2 and days<d1:
        sum += v2
    else:
        sum += v1+v2
    days += 1
print(days-1)
