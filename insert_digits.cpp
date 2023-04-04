#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        char k;cin>>k;

        string str;cin>>str;
        string ans="";
        int idx=-1;
        for(int i=0;i<str.size();i++){
            if(str[i]<k){
                idx=i;
                break;
            }
            // else if(str[i]==k&&str[i]!=0){
            //     idx=i;
            //     break;
            // }
        }
        if(idx!=-1){
            for(int i=0;i<idx;i++){
                ans+=str[i];
            }
            ans+=k;
            for(int i=idx;i<str.size();i++){
                ans+=str[i];
            }
        }
        else{
            ans=str+k;
        }
        cout<<ans<<"\n";
    }
return 0;
}