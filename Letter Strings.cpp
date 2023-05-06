#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;cin>>n;
    string st, temp;
        map<string, long long>mpp;
    int ans=0;
    for(long long j=0;j<n;j++)
    {
        cin>>st;
        temp=st;

        for(char i='a';i<='k';i++)
    {
        if(i!=st[0]){
            temp[0]=i;
            ans+=mpp[temp];
        }
            

    }
    temp=st;
    for(int i='a';i<='k';i++)
    {
        if(i!=st[1])
        {
            temp[1]=i;
            ans+=mpp[temp];
        }
    }
    mpp[st]++;
    }
    cout<<ans<<endl;
    
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