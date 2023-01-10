class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        vector<int> original;
        original.push_back(first);
        int n=encoded.size();
        
        int ans;
        for(int i=0;i<n;i++)
        {
            ans=encoded[i]^original[i];
            original.push_back(ans);
        }
        return original;
    }
};