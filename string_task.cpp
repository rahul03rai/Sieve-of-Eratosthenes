#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s, ans;cin>>s;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]!='a' && s[i]!='e' && s[i]!='y' && s[i]!='u' && s[i]!='i' && s[i]!='o' && s[i]!='A' && s[i]!='E' && s[i]!='Y' && s[i]!='U' && s[i]!='I' && s[i]!='O'){
            ans+='.';
            ans+=(char) tolower(s[i]);
        }
    }
    cout<<ans;
    
    return 0;
}