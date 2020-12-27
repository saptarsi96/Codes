a = input()
ans = 1
while(True):
    if(int(a)<10):
        ans = 0
        break
    sum = 0
    for i in str(a):
        sum += int(i)
    a = sum
    if(a<10):
        break
    else:
        ans += 1
print(ans)