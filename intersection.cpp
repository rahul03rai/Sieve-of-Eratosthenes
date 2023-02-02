class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> ans;

        for(int i=0;i<nums1.size();i++)
            ans.insert(nums1[i]);
        vector<int>res;
        for(int j=0;j<nums2.size();j++)
        {
           if(ans.find(nums2[j])!=ans.end())
           {
               res.push_back(nums2[j]);
               ans.erase(nums2[j]);
           } 
        }
        return res;
    }
};