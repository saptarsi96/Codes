def test(a):
    if '21' in str(a):
        return('The streak is broken!')
    if a%21==0:
        return('The streak is broken!')
    return('The streak lives still in our heart!')


t=int(input())
for _ in range(t):
    a=int(input())
    print(test(a))
    