#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        string s;cin>>s;

        bool flag=0;
        int left=0, right=n-1;
        int ans=n;
        while(left<=right)
        {
            if(s[left]!=s[right]){
                ans-=2;
                left++;
                right--;
                }
            else{
                flag=1;
                break;}

        }
        if(flag)
            cout<<ans<<endl;
        else
            cout<<ans<<endl;
        
    }
    return 0;
}