#include<bits/stdc++.h>
using namespace std;
#define print(a)               printf("%d\n",a)
#define endl                   '\n'
#define int64                  int64_t
#define input(a)               scanf("%d",&a)
#define input1(a,b)            scanf("%d%d",&a,&b)
#define input2(a,b)            scanf("%d%d",&a,&b)
#define ll                     long long
#define mx                     100000005
#define gcd(a, b)              __gcd(a, b)
#define lcm(a, b)              ((a)*((b)/gcd(a,b)))
#define case1(z)               printf("Case %d:\n",z)
#define ios                    ios_base::sync_with_stdio(false)
#define repl(loop,n)           for(int loop=0;loop<n;loop++)
#define MOD                    100000000
#define pii                    pair<int,int>
ll n,i=5,j,cas=0,k;

bool check(int n)
{
    int mask=0;
    for(i=1;i<=5;i++)
    {
        j=int(n/pow(10,i))%10;
        if((mask>>j)%2)
             return false;
        mask|=1<<j;
    }
    return true;
}

int main()
{
    ios;
    cin>>n;
    if(check(n))
        cout<<"YES"<<endl;
    else
        cout<<"No"<<endl;


}
