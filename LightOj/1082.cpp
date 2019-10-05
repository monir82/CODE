#include<bits/stdc++.h>
#define endl '\n'
#define input(a) scanf("%d",&a)
#define print(a) printf("%d\n",a)
#define mx 400005
#define repl(n) for(int loop=0;loop<n;loop++)
using namespace std;
int arr[mx];
int minimum[mx];
void init(int node,int i,int j)
{
    if(i==j)
    {
        minimum[node]=arr[i];
        return ;
    }
    int mid=(i+j)/2;
    init(node*2,i,mid);
    init(node*2+1,mid+1,j);
    minimum[node]=min(minimum[node*2],minimum[node*2+1]);
}

int query(int node,int i,int j,int l,int h)
{
    if(i>h || j<l)
        return 999999999;
    if(i>=l&& j<=h)
        return minimum[node];
    int x,y,mid=(i+j)/2;
    x=query(node*2,i,mid,l,h);
    y=query(node*2+1,mid+1,j,l,h);
    return min(x,y);
}

main()
{
    int t,n,q,x,y,m,i,k=0;
    input(t);
    while(t--)
    {
        scanf("%d%d",&n,&q);
        for(i=1; i<=n; i++)
            input(arr[i]);
        printf("Case %d:\n",++k);
        init(1,1,n);
        repl(q)
        {
            scanf("%d%d",&x,&y);
            m=query(1,1,n,x,y);
            print(m);
        }

    }
}//
