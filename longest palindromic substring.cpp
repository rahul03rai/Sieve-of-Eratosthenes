class Solution {
public:
    string longestPalindrome(string s) {
        if(s.length()<=1)
            return s;
        int max_length=1;
        int n=s.length();
        int start=0, end=0;

        //for odd length
        for(int i=0;i<n-1;i++)
        {
            int low=i, right=i;
            while(low>=0 && right<n)
            {
                if(s[low]==s[right])
                {
                    low--;right++;
                }
                else
                    break;
            }
            int len=right-low-1;
            if(len>max_length)
            {
                max_length=len;
                start=low+1;
                end=right-1;
            }
        }

        //for even length
        for(int i=0;i<n-1;i++)
        {
            int left=i, right=i+1;
            while(left>=0 && right<n)
            {
                if(s[left]==s[right])
                {
                    left--;right++;
                }
                else
                    break;
            }
            int len=right-left-1;
            if(len>max_length)
            {
                max_length=len;
                start=left+1;
                end=right-1;
            }
        }
        return s.substr(start, max_length);
    }
};