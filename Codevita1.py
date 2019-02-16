def str_base(val, base):
    res = ''
    while val > 0:
        res = str(val % base) + res
        # val /= base # only valid for Py2
        val //= base # for getting integer division
    if res: return res
    return '0'

def sum_val(num):
    sum_ = 0
    while(num>0):
        r = num%10
        sum_ += r
        num = num//10
    return sum_

size=int(input())
li=[]
while(len(li)!=size):
    li=list(map(int,input().split(",")))
li2=[]
for i in li:
    li2.append(str_base(i,6))
#print(li2)
li3=[]
for i in li2:
    li3.append(sum_val(int(i)))
#print(li3)
c= 0 
for i in range(size):
    for j in range(i,size):
        if(li3[j]<li3[i]):
            c += 1
print(c,sep='',flush=True)