class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) {
        
        int n=nums.size();
        long long max=INT_MAX;
        int ans;
        long long left=0, right=0, sum=0;
        int leftaverage=0, rightaverage=0;
        for(int i=0;i<n;i++)
        {
            sum+=nums[i];
        }
        for(int i=0;i<n;i++)
        {
            left+=nums[i];
            sum-=nums[i];
            long long diff;
            if(i<n-1)
            {
                diff=abs((left)/(i+1)-(sum/(n-i-1)));
            }
            else
                diff=left/(i+1);
          
            
            if(diff<max)
            {
                max=diff;
                ans=i;
            }
        }
        return ans;
    }
};