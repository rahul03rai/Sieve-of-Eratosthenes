#include<iostream>
using namespace std;

bool isPair(int arr[], int n, int x)
{
    int i=0, j=n-1;
    while(i<j)
    {
        if(arr[i]+arr[j]==x)
            return true;
        else if(arr[i]+arr[j]>x)
            j--;
        else    
            i++;
    }
    return false;
}

int main()
{
    int n=5;
    int arr[n]={2, 5, 8, 12, 30};
    int x=20;
    cout<<isPair(arr, n, x);
    return 0;
}