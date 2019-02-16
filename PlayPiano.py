t = int(input())
for i in range(0, t):
  s = input()
  l = [s[i:i+2] for i in range(0, len(s), 2)]
  if('AA' in l or 'BB' in l):
    print("no")
  else:
    print("yes")
