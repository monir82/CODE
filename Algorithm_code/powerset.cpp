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
string s;
int counter[100];
void printset(int k)
{
    for(int i=1;i<=k;i++)
        cout<<s[counter[i]-1];
    cout<<endl;
}
void powerset(int n)
{
    int k=0;
    counter[0]=0;
    while(1)
    {
        if(counter[k]<n){
            counter[k+1]=counter[k]+1;
            k++;
        }
        else{
            counter[k-1]++;
            k--;
        }
        if(k==0)
            break;
        printset(k);
    }
}

int main()
{
    ios;
    cin>>s;
    sort(s.begin(),s.end());
    powerset(s.size());
}
