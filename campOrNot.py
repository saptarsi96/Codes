for i in range(int(input())):
	dic = {}
	for j in range(1,32):
		dic[j] = 0
	for j in range(int(input())):
		x,y = map(int,input().split())
		dic[x] = y
	for j in range(int(input())):
		x,y = map(int,input().split())
		sum=0
		for k in range(1,x+1):
			sum += dic[k]
		if sum >= y:
			print("Go Camp")
		else:
			print("Go Sleep")