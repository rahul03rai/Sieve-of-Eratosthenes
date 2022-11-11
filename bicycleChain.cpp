#include<bits/stdc++.h>
using namespace std;

#define for(i,a,b) for(int i=a;i<b;i++)

int main()
{
    int n, m, a[10000], k;
    vector<int>b;
    cin>>n;

    for(i,0,n)
    {
        cin>>a[i];
    }
    cin>>m;
    for(j, 0, m)
    {
        cin>>k;
        for(i,0,n)
        {
            if(k%a[i]==0)
                b.push_back(k/a[i]);
        }
    }
    int ma=*max_element(b.begin(), b.end());
    cout<<count(b.begin(), b.end(), ma);

}