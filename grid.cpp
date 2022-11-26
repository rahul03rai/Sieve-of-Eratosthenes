class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        int m=grid.size(), n=grid[0].size();

        vector<int> ori(m, 0), ocj(n, 0), zri(m, 0), zcj(n, 0);
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(grid[i][j]==1)
                {
                    ori[i]++;
                    ocj[j]++;
                }
                if(grid[i][j]==0)
                {
                    zri[i]++;
                    zcj[j]++;
                }
            }
        }
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                grid[i][j]=ori[i]+ocj[j]-zri[i]-zcj[j];
            }
        }
        return grid;

    }
};
