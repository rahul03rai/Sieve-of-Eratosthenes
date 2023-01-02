class Solution {
public:
    bool detectCapitalUse(string word) {
        int ans=0;
        for(int i=0;i<word.size();i++)
        {
            char c=word.at(i);
            if(c>='A' && c<='Z')
                ans++;
            if(!(ans==0 || (ans==1 && word.at(0)>='A' && word.at(0)<='Z') || ans==i+1))
                return false;
        }
        return true;
    }
};