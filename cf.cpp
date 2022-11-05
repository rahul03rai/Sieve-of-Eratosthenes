#include<bits/stdc++.h>
using namespace std;

int first(int arr[], int n, int x)
{
    int low=0, high=n-1;
    while(low<=high)
    {
        int mid=(low+high)/2;

        if(x>arr[mid])
            low=mid+1;
        else if(x<arr[mid])
            high=mid-1;
        else{
            if(mid==0 || arr[mid-1]!=arr[mid])
                return mid;
            else    
                high=mid-1;
        }
    }
    return -1;
}

int last(int arr[], int n, int x)
{
    int low=0, high =n-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(x>arr[mid])
            low=mid+1;
        else if(x<arr[mid])
            high=mid-1;
        else{
            if(mid==n-1 || arr[mid+1]!=arr[mid])
                return mid;
            else    
                low=mid+1;
        }

    }
    return -1;
}

int count(int arr[], int n, int x)
{
    int f=first(arr, n, x);

    if(f==-1)
        return 0;
    else
        return last(arr, n, x)-f+1;
}

int main()
{
    int arr[]={10, 20, 20, 20, 40, 40}, n=6;
    int x=40;
    cout<<count(arr, n, x);
    return 0;
}