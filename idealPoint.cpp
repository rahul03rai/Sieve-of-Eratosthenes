#include<bits/stdc++.h>
using namespace std;

int main()
{
    bool flag=false;
    int t;cin>>t;
    while(t--)
    {
        int n, k;
        cin>>n>>k;

        int l, r;
        
        int left=0, right=0, both=0;

        for(int i=0;i<n;i++)
        {
            cin>>l>>r;
        
            if(l==r && l==k)
                both++;
            else if(l==k)
                left++;
            else if(r==k)
                right++;
        }
        if(both>0)
            cout<<"YES"<<endl;
        else if(left>0 && right>0)
            cout<<"YES"<<endl;
        else    
            cout<<"NO"<<endl;
    }
    return 0;
}
                                                                                                                                                                                                                                                                  