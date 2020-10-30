def find_min_days(prices, profit):
    ans=[]
    for query in profit:
        start = -1
        end = 99999
        for i in range(0,len(prices)):
            for j in range(i+1,len(prices)):
                if prices[j] == prices[i]+query:
                    if max(start,i+1) > min(end,j+1):
                        continue
                    else:
                        start = max(start,i+1)
                        end = min(end,j+1)
        ans.append(start)
        ans.append(end)
    return ans


n, d = map(int, input().split())
prices = list(map(int, input().split()))
profit = list()
for i in range(d):
    profit.append(int(input().strip()))
answer = find_min_days(prices,profit)
statement = ""

for i in range(0,len(answer),2):
    if answer[i] == -1 and answer[i+1] == 99999:
        statement += "-1" +","
    else:
        statement += str(answer[i]) + " "+str(answer[i+1]) + ","
print(statement[0:len(statement)-1])
# Do not remove below line
#print(answer)
# Do not print anything after this line