#include<bits/stdc++.h>
using namespace std;

void intersection(int a[], int b[], int m, int n)
{
    int i=0, j=0;

    while(i<m && j<n)
    {
        if(i>0 && a[i]==a[i-1]){
            i++;
            continue;
            }
        else if(a[i]<b[i])
            i++;
        else if(a[i]>b[i])
            j++;
        else{
            cout<<a[i]<<" ";
            i++;j++;}
    }
}

int main()
{
    int m=5, n=4;
    int a[m]={10, 20, 20, 40, 60};
    int b[n]={20, 10, 5, 20};
    intersection(a, b, m, n);
    return 0;
}