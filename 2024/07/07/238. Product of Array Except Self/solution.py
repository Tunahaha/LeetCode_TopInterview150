class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        result_list = [1] * len(nums)
        right = 1
        for i in range(1,len(nums)):
            result_list[i] = result_list[i-1] * nums[i-1]
        for i in range(len(nums)-1,-1,-1):
            result_list[i] *= right
            right *= nums[i]
        return result_list
            