#include<bits/stdc++.h>
using namespace std;

void solve()
{
    char arr[8][8];

        for(int i=0;i<8;i++)
        {
            for(int j=0;j<8;j++)
                cin>>arr[i][j];
        }
        vector<int>r;

        for(int i=0;i<8;i++)
        {
            for(int j=0;j<8;j++)
            {
                if(arr[i][j]=='R')
                    r.push_back(i);
            }
        }
        for(int i:r)
        {
            bool flag=1;
            for(int j=0;j<8;j++)
            {
                if(arr[i][j]!='R'){
                    flag=0;
                    break;}
            }
            if(flag){
                cout<<'R'<<endl;
                return;
                }
        }
        cout<<'B'<<endl;
 
}

int main()
{
    int t;cin>>t;
    while(t--)
    {
        solve();

           }
    
    return 0;
}