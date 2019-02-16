
def division_value():
    a, b = list(map(int, input().split()))
    for i in range(a, b + 1):
        if i % a == 0 and b % i == 0:
            print(i)
            return
    print(-1)


t = int(input())
for _ in range(t):
    division_value()

