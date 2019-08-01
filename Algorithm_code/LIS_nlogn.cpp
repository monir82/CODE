#include<bits/stdc++.h>
#define print(a)         printf("%d\n",a)
#define end              '\n'
#define int64            int64_t
#define input(a)         scanf("%d",&a)
#define input1(a,b)      scanf("%d%d",&a,&b)
#define input2(a,b)      scanf("%d%d",&a,&b)
#define ll               long long
#define mx               100000
#define gcd(a, b)        __gcd(a, b)
#define lcm(a, b)        ((a)*((b)/gcd(a,b)))
#define case1(z)         printf("Case %d:\n",z)
#define mx               2500
#define ios              ios_base::sync_with_stdio(false)
#define repl(loop,n)     for(int loop=0;loop<n;loop++)
#define MOD              100000000
#define pii              pair<int,int>
const long long inf  =   100000000000000000;
using namespace std;

int value[]={-100000,2,9,7,2,1,0,-1};
int n=8;
int i[mx],L[mx];
int LIS_nlogn()
{
    i[0]=-inf;
    repl(k,n)
    i[mx]=inf;
    int lenlist=0,low,high,mid,k;
    for(k=0;k<n;k++)
    {
        low=0;
        high=lenlist;
        while(low<=high)
        {
            mid=(low+high)/2;
            if(i[mid]<value[k])
            {
                low=mid+1;
            }
            else high=mid-1;
        }
        i[low]=value[k];
        L[k]=low;
        if(lenlist<low)
            lenlist=low;
    }
    return lenlist;

}


int main()
{
    ios;
    int x=LIS_nlogn();
    cout<<x;
    return 0;
}

