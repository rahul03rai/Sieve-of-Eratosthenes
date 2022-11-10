#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a, c, d;
    cin>>a;
    d=0;
    c=1;
    string s1;
    cin>>s1;
    string s2, s3;

    for(int i=0;i<a-1;i++)
    {
        cin>>s2;
        if(s1==s2)
            c++;
        else{   
            s3=s2;
            d++;
        }
    }
    if(c>d)
        cout<<s1<<endl;
    else    
        cout<<s3<<endl;
    return 0;
}