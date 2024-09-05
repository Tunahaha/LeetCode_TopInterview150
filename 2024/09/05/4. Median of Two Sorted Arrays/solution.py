class Solution(object):
    def findMedianSortedArrays(self, nums1, nums2):
        """
        :type nums1: List[int]
        :type nums2: List[int]
        :rtype: float
        """
        new_list=[]
        while len(nums1) is not 0 and len(nums2) is not 0:
            if nums1[0]<= nums2[0]:
                new_list.append(nums1.pop(0))
            else:
                new_list.append(nums2.pop(0))
        while len(nums1) is not 0:
            new_list.append(nums1.pop(0))
        while len(nums2) is not 0:
            new_list.append(nums2.pop(0))
        if len(new_list)%2==0:
            return (new_list[len(new_list)/2-1]+new_list[len(new_list)/2])/2.0
        else:
            return new_list[len(new_list)/2]
        
