t = int(input())
for i in range(t):
  m = list()
  n,k = map(int,input().split(' '))
  l = list(input().split(' '))
  for j in range(k):
    m.append(input().split(' '))
  for s in l:
    if s in sum(m,[]):
      print ("YES")
    else:
      print("NO")
