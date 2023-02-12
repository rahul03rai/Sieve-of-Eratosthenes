class Solution {
public:
    vector<vector<int>> sortTheStudents(vector<vector<int>>& score, int k) {
        priority_queue<pair<int, int>> res;
        
        for(int i=0;i<score.size();i++)
            res.push({score[i][k], i});
        
        vector<vector<int>>ans;

        while(!res.empty())
        {
            auto x=res.top();
            res.pop();

            ans.push_back(score[x.second]);
        }
        return ans;
    }
};