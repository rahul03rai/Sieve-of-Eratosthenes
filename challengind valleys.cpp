#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];

        int inc=0, dec=0;
        bool flag=0;

        for(int i=1;i<n;i++)
        {
            if(arr[i]>arr[i-1])
                inc++;
            else if(arr[i]<arr[i-1])
            {
                dec++;
                if(inc>0)
                {
                    flag=1;
                    break;
                }
            }
        }
        if(!flag)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}