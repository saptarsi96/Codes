import sys,math
# You may change this function parameters
def findMaxProfit(numOfPredictedDay, prices):
    minimum_number = math.inf
    ans = 0
    for i in prices:
        if i < minimum_number:
            minimum_number = i
        if i-minimum_number > ans:
            ans = i-minimum_number
    return ans
    
    
def main():
    line = input().split()
    numOfPredictedDay = int(line[0])
    predictedSharePrices = list(map(int, line[1:]))

    answer = findMaxProfit(numOfPredictedDay, predictedSharePrices)

    # Please do not remove the below line.
    print(answer)
    # Do not print anything after this line

if __name__ == '__main__':
    main()
