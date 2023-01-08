class Solution {
public:
    vector<string> cellsInRange(string s) {
        char c1=s[0];
        char c2=s[3];

        int row1=s[1];
        int row2=s[4];

        vector<string> res;

        for(int j=0;j+c1<=c2;j++)
        {
            for(int i=0;i+row1<=row2;i++)
            {
                string ans;

                ans+=(c1+j);
                ans+=(row1+i);
                res.push_back(ans);
            }
        }
        return res;
    }
};