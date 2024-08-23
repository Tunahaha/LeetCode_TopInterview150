class Solution:
    def combinationSum(self, candidates: List[int], target: int) -> List[List[int]]:
        result = []
        candidates.sort()
        def dfs(first,target,path):
            if target == 0:
                result.append(path)
                return
            if target < 0:
                return
            for i in range(first,len(candidates)):
                dfs(i,target-candidates[i],path+[candidates[i]])
        dfs(0,target,[])
        return result
        