#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        int arr[6];
        for(int i=0;i<6;i++)
            cin>>arr[i];
        if(arr[0]!=arr[2] && arr[0]!=arr[4] && arr[2]!=arr[4])
            cout<<"Yes"<<endl;
        else if(arr[1]!=arr[3] && arr[1]!=arr[5] && arr[3]!=arr[5])
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
            
        
    }
    return 0;
}