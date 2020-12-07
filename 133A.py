t = input()
s = "HQ9"
flag = False
for i in t:
    if i in s:
        flag = True
        break
if(flag):
    print('YES')
else:
    print('NO')