a=1,2
a=list(a)
print(3,flush=True)
b=int(input())
a.remove(b)
for i in a:
    print(i,flush=True)
