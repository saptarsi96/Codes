def longestSubstringFinder(string1, string2):
    answer = ""
    len1, len2 = len(string1), len(string2)
    for i in range(len1):
        match = ""
        for j in range(len2):
            if (i + j < len1 and string1[i + j] == string2[j]):
                match += string2[j]
            else:
                if (len(match) > len(answer)): answer = match
                match = ""
    return len(answer)



a=input()
b=input()
c=int(input())
d=longestSubstringFinder(a,b)
e=(len(a)-(d)+len(b)-(d))
#print(e)
if(e>c):
    print("No")
else:
    print("Yes")