from itertools import combinations
for t in range(int(input().strip())):
	n,m=map(int,input().strip().split())
	l=[]
	for i in range(n):
		l.append(int(input().strip()))
	f=0
	for i in range(1,n+1):
		for j in combinations(l,i):
			if m==sum(j):
				f=1
				print("Yes")
				break
		if f==1:
			break
	else:
		print("No")
