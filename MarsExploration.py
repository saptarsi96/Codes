a=input()
b=int(len(a)/3)
c="SOS"*b
count=0
for x, y in zip(a,c):
    if x != y:
        count+=1
print(count)
