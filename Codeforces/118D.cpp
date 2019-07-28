#include<bits/stdc++.h>
#define print(a) printf("%d\n",a)
#define end '\n'
#define int64 int64_t
#define input(a) scanf("%d",&a)
#define input1(a,b) scanf("%d%d",&a,&b)
#define input2(a,b) scanf("%d%d",&a,&b)
#define ll long long
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) ((a)*((b)/gcd(a,b)))
#define case1(z) printf("Case %d:\n",z)
#define mx 500
#define ios ios_base::sync_with_stdio(false)
#define repl(loop,n) for(int loop=0;loop<n;loop++)
#define MOD 100000000
using namespace std;

int dp[105][105][11][11];
int x,y;

int backtrack(int i,int j,int k1,int k2)
{
    if(i==0 && j==0)
        return 1;
    if((i==0&&j>y-k2) ||(j==0&&i>x-k1))
       return 0;
    if(dp[i][j][k1][k2]!=-1)
        return dp[i][j][k1][k2];
    int sum=0;
    if(k1<x && i)
            sum+=backtrack(i-1,j,k1+1,0);
    if(k2<y && j)
        sum+=backtrack(i,j-1,0,k2+1);

    return dp[i][j][k1][k2]=sum%MOD;
}

void solve()
{
    memset(dp,-1,sizeof(dp));
    int f,h;
    cin>>f>>h>>x>>y;
    cout<<backtrack(f,h,0,0)<<end;
}
int main()
{
    ios;
    solve();
    return 0;
}
