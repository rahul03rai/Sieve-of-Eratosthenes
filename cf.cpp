#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int diff=INT_MAX;
    int a, b;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(abs(arr[i]-arr[j])<diff){
                diff=abs(arr[i]-arr[j]);
                a=i;
                b=j;}
        }
    }
    cout<<a+1<<" "<<b+1<<endl;

    return 0;
}