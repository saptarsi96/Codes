T = int(input())
for _ in range(T):
	N = int(input())
	l = list(map(int, input().split()))
	l.sort()
	ans = 0
	for i in range(1,len(l)):
		ans += l[i] - l[0]
		
	print(ans)
