class Solution{
    public:
    // A1[] : the input array-1
    // N : size of the array A1[]
    // A2[] : the input array-2
    // M : size of the array A2[]
    
    //Function to sort an array according to the other array.
    vector<int> sortA1ByA2(vector<int> A1, int N, vector<int> A2, int M) 
    {
        //Your code here
        vector<int>ans;
        map<int, int> mp;
        
        for(int i=0;i<N;i++)
        {
            mp[A1[i]]++;
        }
        for(int i=0;i<M;i++)
        {
            if(mp.find(A2[i])!=mp.end())
            {
                int freq=mp[A2[i]];
                while(freq--)
                    ans.push_back(A2[i]);
                mp.erase(A2[i]);
            }
        }
        for(auto i:mp)
        {
            while(i.second--)
                ans.push_back(i.first);
            
        }
        return ans;
    } 
};