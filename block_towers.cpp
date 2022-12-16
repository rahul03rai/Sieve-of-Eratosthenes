#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test;cin>>test;

    while(test--)
    {
        int n;cin>>n;

        long long towers;cin>>towers;

        long long arr[n-1];

        for(int i=0;i<n-1;i++)
        {
            cin>>arr[i];
        }
        sort(arr, arr+n-1);

        for(int i=0;i<n-1;i++)
        {
            int ans=(arr[i]-towers)/2;
            if(towers<arr[i])
            {
                towers+=((arr[i]-towers)%2==0)?ans:ans+1;
            }
        }
        cout<<towers<<endl;
    }
    return 0;
}