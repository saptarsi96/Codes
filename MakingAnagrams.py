from collections import *
def number_needed(a, b):
    c=a-b
    d=b-a
    e=c+d
    return len(list(e.elements()))
    
    

a = Counter(input())
b = Counter(input())

print(number_needed(a, b))