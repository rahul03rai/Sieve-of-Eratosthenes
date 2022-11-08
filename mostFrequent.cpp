#include<bits/stdc++.h>
using namespace std;

int mostFrequent(int arr[], int n)
{
    unordered_map<int, int> map;
    for(int i=0;i<n;i++)
        map[arr[i]]++;
    
    int max_count=0, res=-1;

    for(auto i:map)
    {
        if(max_count<i.second){
            res=i.first;
            max_count=i.second;
        }
    }  
    return res;  
}

int main()
{
    int arr[]={40, 50, 30, 40, 50, 30, 40};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<mostFrequent(arr, n);
    return 0;
}