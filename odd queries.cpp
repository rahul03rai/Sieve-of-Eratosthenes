#include<bits/stdc++.h>
using namespace std;

 long long ans, sum=0, t, n, q, prefixsum[200005], arr[200005];
int main()
{
    cin>>t;
    while(t--)
    {
       
        cin>>n>>q;
        
        for(int i=1;i<=n;i++)
        {
            cin>>arr[i];
            sum+=arr[i];
            prefixsum[i]=prefixsum[i-1];
            prefixsum[i]+=arr[i];
        }
        for(int i=0;i<q;i++)
        {
            long long l, r, k;cin>>l>>r>>k;
            ans=prefixsum[n]-(prefixsum[r]-prefixsum[l-1])+k*(r-l+1);
            if(ans%2==1)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
    }

    return 0;
}