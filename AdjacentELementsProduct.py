a=3, 6, -2, -5, 7, 3
a=list(a)
print(max((a[i]*a[i+1] for i in range(len(a)-1))))
