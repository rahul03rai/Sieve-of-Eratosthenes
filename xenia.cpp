#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin>>n>>m;
    int in=1;
    long long ans=0;
    for(int i=0;i<m;i++)
    {
        int pre;
        cin>>pre;
        if(pre>=in)
            ans+=pre-in;
        else
            ans+=n-(in-pre);
        in=pre;
    }
    cout<<ans<<endl;
    return 0;
}