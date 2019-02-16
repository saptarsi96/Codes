def ransom_note(magazine, rasom):
    d = dict()
    for word in magazine:
        if word in d:
            d[word] += 1
        else:
            d[word] = 1
    
    for word in ransom:
        print(d)
        if not word in d:
            return False
        if d[word] == 0:
            return False
        d[word] -=1
        print(d[word])
    return True
    

m, n = map(int, input().strip().split(' '))
magazine = input().strip().split(' ')
ransom = input().strip().split(' ')
answer = ransom_note(magazine, ransom)
if(answer):
    print("Yes")
else:
    print("No")
    