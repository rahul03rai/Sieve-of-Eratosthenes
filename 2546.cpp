class Solution {
public:
    bool makeStringsEqual(string s, string target) {
        if(s==target)
            return true;
        
        bool s1=false, s2=false;

        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='1')
                s1=true;
            if(target[i]=='1')
                s2=true;
        }
        if(s1 && s2)
            return true;
        else
            return false;
        
        
        
    }
};