#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n, s;cin>>n>>s;

        int time[n], enter[n];
        for(int i=0;i<n;i++)
            cin>>time[i];
        for(int i=0;i<n;i++)
            cin>>enter[i];

        int cnt;
        int ans=-1;
        int tt=0;

        for(int i=0;i<n;i++)
        {
            if(tt+time[i]<=s)
            {
                if(enter[i]>ans)
                {
                    ans=enter[i];
                    cnt=i+1;
                }
            }
            ++tt;
        }
        if(ans==-1)
            cout<<"-1"<<endl;
        else
            cout<<cnt<<endl;
}

int main()
{
    int t;cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}