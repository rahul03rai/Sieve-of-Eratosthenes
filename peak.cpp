#include<bits/stdc++.h>
using namespace std;

int getPeak(int arr[], int n)
{
    int low=0, high=n-1;
    while(low<=high)
    {
        int mid=(high+low)/2;
        if((mid==0 || arr[mid-1]<=arr[mid]) && (mid==n-1 || arr[mid+1]<=arr[mid]))
            return mid;
        if(mid>0 && arr[mid-1]>=arr[mid])
            high=mid-1;
        else    
            low=mid+1;
    }
    return -1;
}

int main()
{
    int n=7;
    int arr[7]={5, 20, 70, 60, 20, 50, 60};
    cout<<getPeak(arr, n);
    return 0;
}