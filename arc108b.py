size = int(input())
s = input()
temp = str.maketrans("fox","   ") 
test_str = test_str.translate(temp) 
print(len(test_str))