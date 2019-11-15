#include<bits/stdc++.h>
using namespace std;
const long long INF=(long long)(10e9)+1;
#define SET(mask,n)            mask|=(1<<n)
#define RESET(mask,n)          mask&=~(1<<n)
#define TOGGLE(mask,n)         mask^=(1<<n)
#define ellapsetime            cerr << "Time execute: " << clock() / (double)CLOCKS_PER_SEC << " sec" <<endl
#define int64                  int64_t
#define ll                     long long
#define mx                     (long long)(10e9)+100
#define ios                    ios_base::sync_with_stdio(false)
#define repl(loop,n)           for(int loop=0;loop<(int)n;loop++)
#define MOD                    1000000007
#define pii                    pair<int,int>
#define ff                     first
#define ss                     second


main()
{
    ios;
    int t,n,ans;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n+1];
        repl(i,n) cin>>a[i];
        int e[n+1];
        memset(e,-1,sizeof(e));
        ans=n+5;
        for(int i=0; i<n; i++)
        {
            if(e[a[i]]!=-1)
            {
                ans=min(ans,i-e[a[i]]+1);
            }
            e[a[i]]=i;
        }
        if(ans>n)
            cout<<-1<<endl;
        else
            cout<<ans<<endl;
    }
}
