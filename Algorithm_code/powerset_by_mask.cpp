#include<bits/stdc++.h>
using namespace std;
const int MMAX=0x7fffffff;
const int INF=0xfffffff;
const int mod=1e9+7;
#define print(a)               printf("%d\n",a)
#define endl                   '\n'
#define int64                  int64_t
#define input(a)               scanf("%d",&a)
#define input1(a,b)            scanf("%d%d",&a,&b)
#define input2(a,b)            scanf("%d%d",&a,&b)
#define ll                     long long
#define mx                     1000000005
#define gcd(a, b)              __gcd(a, b)
#define lcm(a, b)              ((a)*((b)/gcd(a,b)))
#define case1(z)               printf("Case %d:\n",z)
#define ios                    ios_base::sync_with_stdio(false)
#define repl(loop,n)           for(int loop=0;loop<n;loop++)
#define MOD                    100000000
#define pii                    pair<int,int>

int main()
{
    ios;
    int n,i,j;
    cin>>n;
    int p=pow(2,n);
    for(i=0;i<p;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i & (1<<j))
                cout<<1;
            else
                cout<<0;
        }
        cout<<endl;
    }
}
