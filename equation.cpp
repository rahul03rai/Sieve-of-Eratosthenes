#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;cin>>n>>m;
    int a, b, sum=n+m, eq1, eq2, count=0;

    for(a=0;a<sum;a++)
    {
        for(b=0;b<sum;b++)
        {
            eq1=pow(a,2)+b;
            eq2=a+pow(b,2);
            if(eq1==n && eq2==m)
                count++;
        }
    } 
    cout<<count<<endl;
    return 0;
}