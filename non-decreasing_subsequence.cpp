class Solution {
public:

    vector<vector<int>>ans;

    void solve(vector<int>&nums, int index, vector<int>res)
    {
        if(res.size()>1)
            ans.push_back(res);
        unordered_set<int>s;
        for(int i=index;i<nums.size();i++)
        {
            int curr=nums[i], prev=res.size()>0 ? res[res.size()-1]:-101;
            if(s.find(curr)==s.end() && curr>=prev){
                res.push_back(curr);
                solve(nums, i+1, res);
                res.pop_back();
                s.insert(curr);
            }
        }
        return ;
    }
    vector<vector<int>> findSubsequences(vector<int>& nums) {
        vector<int>res;
        solve(nums, 0, res);
        return ans;
    }
};