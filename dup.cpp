#include<bits/stdc++.h>
using namespace std;

int removeDuplicates(int arr[], int n)
{
    int res=1;
    for(int i=1;i<n;i++)
    {
        if(arr[i]!=arr[res-1])
        {
            arr[res]=arr[i];
            res++;
        }

    }
    return res;
}

int main()
{
    int n=5;
    int arr[n]={10, 40, 20, 30, 30};
    cout<<removeDuplicates(arr, n)<<endl;
    return 0;
}