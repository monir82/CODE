#include<bits/stdc++.h>
using namespace std;
const int mod=1e9+7;
const int N = int(3e5) + 99;
const long long INF64 = (long long)(1e18) + 100;
#define int64                  int64_t
#define ll                     long long
#define mx                     1000000005
#define end                    '\n'
#define gcd(a, b)              __gcd(a, b)
#define lcm(a, b)              ((a)*((b)/gcd(a,b)))
#define ios ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr); cout.setf(ios::fixed); cout.precision(20)
#define repl(loop,n)           for(int loop=0;loop<(int)n;loop++)
#define MOD                    100000000
#define pii                    pair<int,int>


int main()
{
    ios;
    int t,i,c,m,x;
    cin>>t;
    int ans;
    while(t--)
    {
        cin>>c>>m>>x;
        int l=0,r=min(c,m);
        while(l<=r)
        {
            int mid=(l+r)/2;
            if(c+m+x-2*mid>=mid)
            {
                l=mid+1;
                ans=mid;
            }
            else r=mid-1;
        }
        cout<<ans<<endl;
    }
   // cerr << "Time execute: " << clock() / (double)CLOCKS_PER_SEC << " sec" <<endl;
    return 0;
}
