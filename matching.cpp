#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--)
    {
    string s;cin>>s;

    int n=s.size();
    int ans=1;

    if(s[0]=='0')
        ans=0;
    

    for(int i=n-1;i>=0;i--)
    {
        char c=s.at(i);
        if(c=='?')
        {
            if(i==0)
                ans*=9;
            else{
                ans*=10;
            }
        }
    }
    if(s.at(0)=='0')
        cout<<'0'<<endl;
    else
        cout<<ans<<endl;
    }
    return 0;
}