import time
a=int(input())
start=time.clock()
f=1
for i in range(1,a+1):
    f*=i
    #print(f)
end=time.clock()
print(end-start)
