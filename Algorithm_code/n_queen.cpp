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
ll n=8,i,j,cas=0,k;
int x[110],line=0;

bool place(int queen,int row)
{
    for(i=1;i<queen;i++)
    {
        if(x[i]==row || (abs(x[i]-row)==abs(i-queen)))
            return false;
    }
    return true;
}
void nqueen(int queen)
{
    for(int row=1;row<=8;row++)
    {
        if(place(queen,row))
        {
            x[queen]=row;      //holds queen to the row number;
            if(queen==n)
            {
                cout<<++line<<"           ";
                for(i=1;i<=n;i++)
                    cout<<x[i]<<" ";
                cout<<endl;
            }
            else
                nqueen(queen+1);
        }
    }
}

int main()
{
    ios;
    nqueen(1);
}
