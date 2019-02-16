
def test_prime(n):
    if (n==1):
        return False
    elif (n==2):
        return True;
    else:
        for x in range(2,n):
            if(n % x==0):
                return False
        return True             

t=int(input())

for i in range(t):
    a=int(input())
    b=list()
    for i in range(a):
        if(test_prime(i)==True):
            b.append(i)
    for i in range(0,len(b)):
        for j in range(1,len(b)):
            if(b[i]+b[j]==a):
                print(len(i,j))

                
    

            
        
