# You may change this function parameters
def calculateMinimumSession(numOfBankers, numOfParticipants, bankersPreferences, participantsPreferences):
    
    bankers = [0]*numOfBankers
    participants = [0]*numOfParticipants
    for i in bankersPreferences:
        for j in i:
            participants[j-1] += 1
    for i in participantsPreferences:
        for j in i:
            bankers[j-1] += 1

    p = max(participants)
    q = max(bankers)
    return min(p,q)
    
    
    
    
    '''ans = 0
    bankers = 0
    participants = 0
    iterations = min(numOfBankers,numOfParticipants)
    for i in range(numOfBankers):
        if len(set(bankersPreferences[i])&set(participantsPreferences[i])) > 0:
            bankersPreferences[i].remove(bankersPreferences[i][0])
            bankers += 1
    bankers /= iterations
    count = 0
    for i in bankersPreferences:
        for j in i:
            if j>0:
                count += 1
    return int(bankers+count)

    


    iterations = min(numOfBankers,numOfParticipants)
    for i in range(iterations):
        if len(set(bankersPreferences[i])&set(participantsPreferences[i])) > 0:
            ans += 1
    ans = ans // iterations
    ans += (numOfParticipants - numOfBankers)
    return ans
    '''

def main():
    firstLine = input().split(" ")
    secondLine = input().split(" ")
    # Sample input:
    # 3 1,1,1&2
    # 3 3&2,1,1
    numOfBankers = int(firstLine[0])
    numOfParticipants = int(secondLine[0])
    bankersPreferences = firstLine[1].split(",")
    participantsPreferences = secondLine[1].split(",")

    bankersPreferencesListOfList = parsePreferences(bankersPreferences)
    participantsPreferencesListOfList = parsePreferences(participantsPreferences)

    answer = calculateMinimumSession(
        numOfBankers,
        numOfParticipants,
        bankersPreferencesListOfList,
        participantsPreferencesListOfList
    )

    # Please do not remove the below line.
    print(answer)
    # Do not print anything after this line


def parsePreferences(preferences):
    preferenceListOfList = []
    for index in range(0, len(preferences)):
        preferenceArr = preferences[index].split("&")
        preferenceListOfList.append([int(p) for p in preferenceArr])
    return preferenceListOfList


if __name__ == '__main__':
    main()