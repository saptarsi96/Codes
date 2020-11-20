from collections import defaultdict
t = int(input())
for _ in range(t):
    ans = 0
    s = input()
    left = "({["
    right = ")}]"
    stack = defaultdict(int)
    for i in s:
        if i in left:
            stack[i] += 1
        elif i == ")" and len(stack)>0 and stack['(']>0:
            try:
                stack['('] -= 1
                ans += 1
            except:
                pass
        elif i == "}" and len(stack)>0 and stack["{"]>0:
            try:
                stack["{"] -= 1
                ans += 1
            except:
                pass
        elif i == "]" and len(stack)>0 and stack["["]>0:
            try:
                stack["["] -= 1
                ans += 1
            except:
                pass
    print(ans)
        