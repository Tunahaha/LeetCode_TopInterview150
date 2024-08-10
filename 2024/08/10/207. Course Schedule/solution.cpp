class Solution {
public:
    bool dfs(int i,vector<int>&visit,vector<int>&in_stk,vector<int>ner[])
    {
        visit[i]=1, in_stk[i]=1;

        for(auto& j: ner[i])
            if(!visit[j]){
                if(dfs(j,visit,in_stk,ner))return 1;
            }
            else if(in_stk[j]) return 1;

        in_stk[i]=0;
        return 0;
    }
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<int>ner[numCourses];
        for(auto& i:prerequisites)
            ner[i[1]].push_back(i[0]);
        vector<int>visit(numCourses,0),in_stk(numCourses,0);
        for(int i=0;i<numCourses;i++)
            if(!visit[i])
                if(dfs(i,visit,in_stk,ner)) return 0;
            
        return 1;
    }
};