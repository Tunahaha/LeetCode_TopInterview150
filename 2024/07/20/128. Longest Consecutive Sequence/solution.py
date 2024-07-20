class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        max_count=0
        nums_set=set(nums)
        for num in nums_set:
            if num in nums_set and not num-1 in nums_set:
                count=0
                holder=num
                while holder in nums_set:
                    count+=1
                    holder+=1
                max_count=max(max_count,count)

        return max_count

        