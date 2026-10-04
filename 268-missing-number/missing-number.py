class Solution:
    def missingNumber(self, nums: list[int]) -> int:
        missing = n = len(nums)
        for i in range(n):
            missing ^= i
            missing ^= nums[i]
        

        return missing
    


        