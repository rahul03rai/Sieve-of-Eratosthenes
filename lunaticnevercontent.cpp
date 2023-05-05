#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;cin>>n;
    vector<int>arr(n);

    for(int i=0;i<n;i++)
        cin>>arr[i];
    
    int ans=abs(arr[n-1]-arr[0]);

    for(int i=1;i<n/2;i++)
        ans=__gcd(ans, abs(arr[n-i-1]-arr[i]));
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