#include<bits/stdc++.h>
using namespace std;

int main()
{

    int t;cin>>t;
    while(t--)
    {
        long long n;cin>>n;
        string s;cin>>s;

        vector<int> pre(n, 0), suff(n, 0);

        unordered_set<char> st;

        for(int i=0;i<n;i++)
        {
            st.insert(s[i]);
            pre[i]=st.size();
        }
        st.clear();

        for(int i=n-1;i>=0;i--)
        {
            st.insert(s[i]);
            suff[i]=st.size();
        }

        int MAX=0;
        int ans=0;
        for(int i=0;i<n-1;i++)
        {
            ans=pre[i]+suff[i+1];
            MAX=max(MAX, ans);
        }
        cout<<MAX<<endl;
    }
    return 0;
}