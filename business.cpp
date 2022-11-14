#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;cin>>n;
    int arr[12];
    int sum=0;
    for(int i=0;i<12;i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }
    if(sum<n)
        cout<<-1<<endl;
    else{
        int total=0;
        int count=0;
        int x=sizeof(arr)/sizeof(arr[12]);
        sort(arr, arr+x, greater<int>());
        while(total<n)
        {
            total+=arr[count];
            count++;
        }
        cout<<count<<endl;
    }

    return 0;
}