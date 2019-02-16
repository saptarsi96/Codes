a=input()
m=dict((letter,a.count(letter)) for letter in set(a))
s=0
for v in m.values():
    if v%2!=0:
        s=s+1
if s>1:     
    print("0")
else:
    print("1")
