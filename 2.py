a=input()
b="love"
p=0
for i in a:
    for j in range(len(b)):
        if(i==b[j]):
            p+=1
	if(p==len(b)):
            break
    if(p==len(b)):
        print("I love you, too!")
    else:
        print("Let us breakup!")
