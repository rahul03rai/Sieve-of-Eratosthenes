#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        int k;cin>>k;
        string s;cin>>s;
        

        int small[26], capital[26];
        for(int i=0;i<26;i++)
        {
            small[i]=capital[i]=0;
        }
        for(int i=0;i<n;i++)
        {

            if(s[i]>='a' && s[i]<='z')
                small[s[i]-97]++;
            else
                capital[s[i]-65]++;
        }
        int ans=0, extra=0;
        for(int i=0;i<26;i++)
        {
            ans+=min(small[i],capital[i]);
            small[i]=abs(small[i]-capital[i]);
            extra+=(small[i]/2);
        }
        ans+=min(k, extra);

        cout<<ans<<endl;
    }
    return 0;
}