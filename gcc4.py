# Participants may update the following function parameters



def maximumExpectedMoney(noOfTradesAvailable, maximumTradesAllowed,p,x,y):

    profits = [-1]*noOfTradesAvailable
    for i in range(noOfTradesAvailable):
        profits[i] = p[i] * x[i] - ( (1-p[i]) * y[i] )
    profits = sorted(profits,reverse = True)
    ans = 0
    for i in range(maximumTradesAllowed):
        if profits[i]<0:
            continue
        else:
            ans += profits[i]
    return ans
        


def main():
    # This part may require participants to fill in as well.
    noOfTradesAvailable, maximumTradesAllowed = list(map(int, input().split()))
    p = list(map(float, input().split()))
    x = list(map(float, input().split()))
    y = list(map(float, input().split()))

    # Participants may update the following function parameters
    answer = maximumExpectedMoney(noOfTradesAvailable, maximumTradesAllowed,p,x,y)
    # Do not remove below line
    print(round(answer,2))
    # Do not print anything after this line

if __name__ == '__main__':
    main()