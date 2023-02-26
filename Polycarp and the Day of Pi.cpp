#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        string a, b="314159265358979323846264338327";
        cin>>a;

        int count=0;

        for(int i=0;i<30;i++)
        {
            if(a[i]!=b[i])
                break;
            else
                count++;
        }
        cout<<count<<endl;
    }

    return 0;
}