#include<bits/stdc++.h>
#define print(a) printf("%d\n",a)
#define end '\n'
#define int64 int64_t
#define input(a) scanf("%d",&a)
#define input1(a,b) scanf("%d%d",&a,&b)
#define input2(a,b) scanf("%d%d",&a,&b)
#define ll long long
#define mx 100000
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) ((a)*((b)/gcd(a,b)))
#define case1(z) printf("Case %d:\n",z)
#define mx 2500
#define ios ios_base::sync_with_stdio(false)
#define repl(loop,n) for(int loop=0;loop<n;loop++)
#define MOD 100000000
#define pii pair<int,int>
using namespace std;

int value[]= {-100000,5,0,9,2,7,3,4};
int n=8;
int l[10]= {1};
int bottomuplis()
{
    int i,j,m=1;
    for(i=0; i<n; i++)
    {
        for(j=0; j<i; j++)
        {
            if(value[i]>value[j])
            {
                if(l[j]+1>m)
                {
                    m=l[j]+1;
                }
            }
        }
        l[i]=m;
        m=0;
    }
}


int main()
{
    ios;
    bottomuplis();
    cout<<l[7]<<endl;  //start end to first
    return 0;
}

