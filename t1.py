from collections import defaultdict
def numPairsDivisibleBy60(time):
    remainders = defaultdict(int)
    ret = 0
    for t in time:
        if t % 60 == 0: # check if a%60==0 && b%60==0
            ret += remainders[0]
        else: # check if a%60+b%60==60
            ret += remainders[60-t%60]
        remainders[t % 60] += 1 # remember to update the remainders
    return ret

li = [30,20,150,100,40]
print(numPairsDivisibleBy60(li))



