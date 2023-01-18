class Solution {
public:
    bool checkIfPangram(string sentence) {
        for(int i=0;i<=25;i++)
        {
            char ch=i+'a';
            if(sentence.find(ch)==string::npos)
                return false;
        }
        return true;
    }
};