class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        strs_dic={}
        for i in strs:
            sort_word=''.join(sorted(i))
            if sort_word not in strs_dic:
                strs_dic[sort_word] = []
            strs_dic[sort_word].append(i)
        return list(strs_dic.values())
        