#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;cin>>n;
        int arr[n];
        for(int i=1;i<=n;i++)
            cin>>arr[i];

        bool flag=false;

        for(int i=1;i<=n;i++)
        {
            if(arr[i]<=i)
            {
                cout<<"YES"<<endl;
                return;
            }
        }
        cout<<"NO"<<endl;
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