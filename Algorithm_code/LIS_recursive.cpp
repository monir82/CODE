#include<bits/stdc++.h>
#define print(a)        printf("%d\n",a)
#define end             '\n'
#define int64           int64_t
#define input(a)        scanf("%d",&a)
#define input1(a,b)     scanf("%d%d",&a,&b)
#define input2(a,b)     scanf("%d%d",&a,&b)
#define ll              long long
#define mx              100000
#define gcd(a, b)       __gcd(a, b)
#define lcm(a, b)       ((a)*((b)/gcd(a,b)))
#define case1(z)        printf("Case %d:\n",z)
#define mx              2500
#define ios             ios_base::sync_with_stdio(false)
#define repl(loop,n)    for(int loop=0;loop<n;loop++)
#define MOD             100000000
#define pii             pair<int,int>
using namespace std;

int value[]={-100000,5,0,9,2,7,3,4};
int n=8;
int dir[mx],dp[mx];
int longest(int u)
{
    if(dp[u]!=-1)
        return dp[u];
    int m=0;
    for(int v=u+1;v<n;v++)
    {
        if(value[v]>value[u])
        {
            if(longest(v)>m)
            {
                m=longest(v);
               // dir[u]=v;
            }
        }
    }
    dp[u]=1+m;
    return dp[u];
}


int main()
{
    memset(dp,-1,sizeof(dp));
    memset(dir,-1,sizeof(dir));
    ios;
    cout<<longest(0)<<endl;    //lenth of subsequence from each node
    cout<<longest(1)<<endl;
    cout<<longest(2)<<endl;
    cout<<longest(3)<<endl;
    cout<<longest(4)<<endl;
    cout<<longest(5)<<endl;
    cout<<longest(6)<<endl;
    cout<<longest(7)<<endl;
    return 0;
}

