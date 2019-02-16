def binary_search(li,l,r,num):
    while l<=r:
        mid=l+(r-1)//2
        if(li[mid]==num):
            return mid
        elif li[mid]>num:
            r=mid-1
        else:
            l=mid+1
    return -1
li=list(map(int,input().split()))
num=int(input())
answer=binary_search(li,0,len(li)-1,num)
print(answer)
    