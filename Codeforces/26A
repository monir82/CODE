#include<bits/stdc++.h>
using namespace std;
vector<int>v;
void sieve(bool a[],int n)
{
    int i;
    for(i=2; i<=n; i++)
        a[i]=true;
    for(i=2; 2*i<=n; i++)
        a[2*i]=false;
    int s=sqrt(n);
    for(i=3; i<=s; i+=2)
    {
        for(int j=2; i*j<=n; j++)
        {
            a[i*j]=false;
        }
    }
    for(i=2; i<=n; i++)
    {
        if(a[i])
            v.push_back(i);                //This is for storing prime Numbers//
    }
}


int b[3001];
int main()
{
    int n,i,j,c=0;
    cin>>n;
    bool a[n/2+1];
    sieve(a,n/2);
    for(i=0; i<v.size(); i++)
    {
        if(b[v[i]]==0)
        {
            for(j=v[i]; j<=n; j+=v[i])                // counting number of divisors//
            {
                b[j]++;
            }
        }

    }
    for(i=2;i<=n;i++)
    {
        if(b[i]==2)
        {
            c++;
        }
    }
    cout<<c<<endl;
}
