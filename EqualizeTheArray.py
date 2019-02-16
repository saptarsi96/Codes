n=int(input())
li=list(map(int,input().split()))
a=max(li,key=li.count)
print(len(li)-li.count(a))
