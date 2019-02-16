a=list(input())
b="ruby"
p=0
count=0
for i in a:
    for j in range(len(b)):
        if(i==b[j]):
            p+=1
            a.remove(i)
      
	    