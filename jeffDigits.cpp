#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int count5=0, count0=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
            count0++;
        else if(arr[i]==5)
            count5++;
    }
    if(count0==0)
        cout<<"-1"<<endl;
    else if(count0!=0 && count5<9)
        cout<<'0'<<endl;
    else{
            int num5=(count5/9)*9;

    for(int i=0;i<num5;i++)
    {
        cout<<'5';
    }
    for(int i=0;i<count0;i++)
    {
        cout<<'0';
    }
    }
    return 0;
}