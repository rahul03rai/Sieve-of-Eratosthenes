#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;cin>>n;
    string s;cin>>s;

    unordered_set<int> st;

    for(int i=0;i<n;i++)
        st.insert(s[i]);

    int size=st.size();

    int total=0;
    total+=2*size + (n-size);
    cout<<total<<endl;
}

int main()
{
    int t;cin>>t;
    while(t--)
    {
        solve();
    }
}