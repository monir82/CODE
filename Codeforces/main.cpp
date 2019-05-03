#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll gcd(ll a,ll b)
{
    if(b==0)
        return a;
    return gcd(b,a%b);
}
ll max(ll a,ll b)
{
    if(a>b)
        return a;
    return b;
}
ll min(ll a,ll b)
{
    if(a>b)
        return b;
    return a;
}
using namespace std;
main()
{
    int n,m,i,j,k=0;
    cin>>n>>m;
    long long x[n+1],p[m],u;
    for(i=0;i<n;i++)
        cin>>x[i];
    for(i=0;i<m;i++)
        cin>>p[i];
    u=x[1]-x[0];
    for(i=2;i<n;i++)
    {
        u=gcd(max(u,(x[i]-x[i-1])),min(u,(x[i]-x[i-1])));
    }
    if(i==n)
    {
        for(i=0;i<m;i++)
        {
            if(u%p[i]==0)
            {
                cout<<"YES"<<endl;
                cout<<x[0]<<" "<<i+1<<endl;
                k=1;
                return 0;
            }
        }
    }
    if(!k)
        cout<<"NO"<<endl;
    return 0;
}
