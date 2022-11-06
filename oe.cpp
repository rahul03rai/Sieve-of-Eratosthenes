#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n, k;
    cin>>n>>k;

    long long mid=(n+1)/2;

    if(k<=mid)
        cout<<k*2-1<<endl;
    else    
        cout<<(k-(n+1)/2)*2<<endl;
    return 0;
}