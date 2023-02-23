class Solution {
public:
    int findMaximizedCapital(int k, int w, vector<int>& profits, vector<int>& capital) {
        int n=profits.size();

        vector<pair<int, int>> prof;

        for(int i=0;i<n;i++)
            prof.push_back({capital[i], profits[i]});

        sort(prof.begin(), prof.end());

        priority_queue<int>profit;

        int j=0;

        for(int i=0;i<k;i++)
        {
            while(j<n && prof[j].first<=w){
                profit.push(prof[j++].second);
            }

            if(profit.empty())
                break;
            w+=profit.top();
            profit.pop();
        }
        return w;
    }
};