class Solution {
public:
    long long minimumTime(vector<int>& time, int totalTrips) {
        long long left=1;
        long long right=1e14;

        while(left<=right)
        {
            long long trip=0;
            long long mid=(left+right)/2;
            for(int i=0;i<time.size();i++)
                trip += mid / time[i];
            if(trip < totalTrips){
                left = mid + 1;
            }
            else 
                right = mid - 1;
        }
        return left;
    }
};
