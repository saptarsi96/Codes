import math
t=int(input())
for i in range(t):
    base=int(input())
    area=(base**2)/2
    print(math.floor(area)//4)
