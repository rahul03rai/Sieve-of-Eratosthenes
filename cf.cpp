#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;cin>>n;
    int arr[n];
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
    }
    int diff=INT_MAX;
    int ans;
    for(int i=1;i<n;i++)
    {
        if(abs(arr[i]-arr[i+1])<diff){
            diff=abs(arr[i]-arr[i+1]);
            ans=i;
        }
    }
    if(abs(arr[n]-arr[1])<diff)
        cout<<n<<" 1"<<endl;
    else    
        cout<<ans<<" "<<ans+1<<endl;
    return 0;
}
