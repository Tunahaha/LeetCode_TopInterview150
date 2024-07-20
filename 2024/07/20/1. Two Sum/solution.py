class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        num_dic={}
        for  i in range(len(nums)):
            num=target-nums[i]
            if num in num_dic:
                return [num_dic[num],i]
            num_dic[nums[i]]=i
        return []