#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;cin>>n>>m;
    int bob[n];
    for(int i=0;i<n;i++)
        cin>>bob[i];
    sort(bob, bob+n);
    int sum=0;
    for(int i=0;i<m;i++)
    {
        if(bob[i]<0)
        {
            sum+=abs(bob[i]);
        }
    }
    cout<<sum<<endl;
}