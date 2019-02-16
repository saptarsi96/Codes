n = int(input())
s = [int(x) for x in input().split(" ")]

print(len(s))
while len(s):
    cut = min(s)
    new_s = []
    for c in s:
        # print(c, cut)
        if c > cut:
            new_s.append(c-cut)
    if len(new_s):
        print(len(new_s))
    s = new_s
