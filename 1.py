l=int(input())
n=int(input())
for i in range(n):
    a,b=list(map(int,input().split()))
    if(a==b and a>=l and b>=l):
        print("ACCEPTED")
    elif(a!=b and a>=l and b>=l):
        print("CROP IT")
    else:
        print("UPLOAD ANOTHER")
