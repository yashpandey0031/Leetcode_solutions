class Solution:
    def findMaxAverage(self, nums: list[int], k: int) -> float:
        maxSum = windowSum = sum(nums[:k])
        
        for i in range(k , len(nums)):
            windowSum= windowSum - nums[i- k] + nums[i]
            maxSum = max(maxSum,windowSum)

        return maxSum / k