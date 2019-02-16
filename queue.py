from collections import deque

a=deque()
for i in range(5,0,-1):
    a.append(i)
print(a)

print("The queue has",len(a),"Values")
print("The end is ",a.pop())
print("The beginning is ",a.popleft())