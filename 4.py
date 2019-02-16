t=int(input())
li= [int(x) for x in input().split()]

li.sort(reverse=True)
print(int(li[0])+2)
