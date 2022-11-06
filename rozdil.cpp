#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,  min=1000000001, idx=0, count=1;
    cin>>n;
    int arr[n];
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];

        if(arr[i]<min)
        {
            min=arr[i];
            idx=i;
            count=1;
        }
        else if(arr[i]==min)
        {
            count++;
        }
    }
    if(count==1)
        cout<<idx<<endl;
    else
        cout<<"Still Rozdil"<<endl;
    return 0;
}