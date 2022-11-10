#include<bits/stdc++.h>
using namespace std;

bool givenSum(int arr[], int n, int sum)
{
    int s=0, curr=0;
    for(int i=0;i<n;i++)
    {
        curr+=arr[i];
        while(sum<curr)
        {
            curr-=arr[s];
            s++;
        }
        if(sum==curr){
            cout<<"found"<<endl;
            return true;
        }
    }
    return false;
}

int main()
{
    int n=4;
    int arr[n]={4, 8, 12, 5};
    int sum=13;
    givenSum(arr, n, sum);
}