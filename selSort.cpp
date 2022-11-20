#include<bits/stdc++.h>
using namespace std;

void selectionSort(int arr[], int n)
{
    for(int i=0;i<n-1;i++)
    {
        int minI=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[i])
            minI=j;
        }
        int temp=arr[minI];
        arr[minI]=arr[i];
        arr[i]=temp;

    }
    cout<<"after selection sort: "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int arr[]={13, 46, 24, 52, 20, 9};
    int n=sizeof(arr)/sizeof(arr[0]);
       cout << "Before selection sort: " << "\n";
   for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << "\n";
  selectionSort(arr, n);
    return 0;
}
