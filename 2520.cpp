class Solution {
public:
    int countDigits(int num) {
        int ans=0;
        int n=num;

        while(num>0)
        {
        
            ans+=(n%(num%10)==0);
            num=num/10;
        }
        return ans;
    }
};