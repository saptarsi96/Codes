d1,v1,d2,v2,p = list(map(int,input().split()))
vaccines = [0]*100
if(d1>d2):
    for i in range(d2-1,d1-1):
        vaccines[i] = v2
else:
    for i in range(d1-1,d2-1):
        vaccines[i] = v1
index = max(d1,d2)
for i in range(index-1,len(vaccines)):
    vaccines[i] = v1+v2
ans = 0
sum = 0
for i in range(0,len(vaccines)):
    if(sum>=p):
        break
    else:
        sum += vaccines[i]
        ans += 1
print(ans)
