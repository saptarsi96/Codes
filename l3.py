def maxOperations(nums,k):
    left = 0
    right = len(nums)-1
    nums = sorted(nums)
    ans = 0
    while(left<right):
        if nums[left] + nums [right] == k:
            ans += 1
            left += 1
            right -= 1
        elif nums[left] + nums[right] > k:
            right -= 1
        else:
            left += 1
    return ans

print(maxOperations([3,1,3,4,3],6))