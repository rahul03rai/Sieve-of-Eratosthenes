class Solution {
public:

    int maxVal(vector<vector<int>> &vector, int i, int j)
    {
        int maxele=INT_MIN;
        for(int a=i;a<i+3;a++)
        {
            for(int b=j;b<j+3;b++)
                maxele=max(maxele, vector[a][b]);
        }
        return maxele;
    }
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
        int n=grid.size();

        vector<vector<int>> ans(n-2, vector<int>(n-2));

        for(int i=0;i<n-2;i++)
        {
            for(int j=0;j<n-2;j++)
            {
                ans[i][j]=maxVal(grid, i, j);
            }
        }
        return ans;
    }
};