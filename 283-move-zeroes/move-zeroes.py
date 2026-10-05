class Solution:
    def moveZeroes(self, nums: list[int]) -> None:
        firstPointer = 0
        secondPointer = 1

        while secondPointer < len(nums):
            if nums[firstPointer] == 0 and nums[secondPointer] != 0:
                nums[firstPointer], nums[secondPointer] = nums[secondPointer], nums[firstPointer]
                firstPointer += 1
                secondPointer += 1

            elif nums[firstPointer] == 0 and nums[secondPointer] == 0:
                secondPointer += 1

            else:
                firstPointer += 1
                secondPointer += 1