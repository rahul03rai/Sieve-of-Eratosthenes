class Solution {
public:
    int minPartitions(string n) {
        int min=INT_MIN;
        int rem=0;
        int ans;
        for(int i=0;i<n.size();i++)
        {
            ans=n[i]-'0';
            if(ans>min)
                min=ans;
        }
        return min;
    }
};