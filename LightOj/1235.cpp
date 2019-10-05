#include<bits/stdc++.h>
using namespace std;
const int MAX=100000000;
const long long INF=(long long)(10e18)+1;
const int mod=1e9+7;
#define ellapsetime            cerr << "Time execute: " << clock() / (double)CLOCKS_PER_SEC << " sec" <<endl
#define int64                  int64_t
#define ll                     long long
#define mx                     (long long)(10e18)+100
#define gcd(a, b)              __gcd(a, b)
#define lcm(a, b)              ((a)*((b)/gcd(a,b)))
#define case1(z)               printf("Case %d: ",z)
#define ios                    ios_base::sync_with_stdio(false)
#define repl(loop,n)           for(int loop=0;loop<(int)n;loop++)
#define MOD                    1000000007
#define pii                    pair<int,int>
int arr[20],n;
vector<int64_t>lt,rt;

void generat(int sum,int low,int high,vector<int64_t>&v)
{
    if(low==high)
    {
        v.push_back(sum);
        return ;
    }
    repl(i,3)
    generat(sum+arr[low]*i,low+1,high,v);
}

int main()

{
    int t,k,i,cas=0;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        lt.clear(),rt.clear();
        repl(i,n)
        cin>>arr[i];
        generat(0,0,n/2,lt);
        sort(lt.begin(),lt.end());
        generat(0,n/2,n,rt);
        int s=rt.size();
        cout<<"Case "<<++cas<<": ";
        for(i=0;i<s;i++)
        {
            if(binary_search(lt.begin(),lt.end(),k-rt[i]))
            {
                cout<<"Yes"<<endl;
                break;
            }

        }
        if(i==s) cout<<"No"<<endl;
    }
   // ellapsetime;
}
