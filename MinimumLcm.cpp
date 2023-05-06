#include<bits/stdc++.h>
using namespace std;

long long gcd(long long int a, long long int b)
{
  if (b == 0)
    return a;
  return gcd(b, a % b);
}
 
// Function to return LCM of two numbers
long long lcm(long long a, long long b)
{
    return (a / gcd(a, b)) * b;
}

void solve()
{
    long long n;cin>>n;
    
    long long ans=INT_MAX;

    long a=1;
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            a=n/i;
            break;
        }
    }
    cout<<a<<' '<<n-a<<endl;
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