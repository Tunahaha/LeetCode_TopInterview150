class Solution {
public:
    vector<int>helper(int k,vector<vector<int>>& prerequisites){
        vector<int>graph[k];
        vector<int> degree(k);
        queue<int>q;
        vector<int>res;
        for(auto i:prerequisites){
            graph[i[1]].push_back(i[0]);
            degree[i[0]]++;
        }
        for(int i=0;i<k;i++){
           if(degree[i]==0)q.push(i);
       }
        while(!q.empty()){
            int i = q.front();
            q.pop();
            res.push_back(i);
            for (auto j: graph[i]){
                degree[j]--;
                if(degree[j]==0){
                    q.push(j);
                }
            }
        }
        return res;


    }


    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
    vector<int> res = helper(numCourses,prerequisites);
       if(res.size()<numCourses){
        return {};
       }
         return res;
    }
};