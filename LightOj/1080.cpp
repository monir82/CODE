#include<bits/stdc++.h>
#define end '\n'
#define input(a) scanf("%d",&a)
#define print(a) printf("%d\n",a)
#define mx 400005
#define repl(n) for(int loop=0;loop<n;loop++)
using namespace std;
int invert[mx];
int isinvert;
void init(int node,int i,int j)
{
    if(i==j)
    {
        invert[node]=0;
        return ;
    }
    int mid=(i+j)/2;
    init(node*2,i,mid);
    init(node*2+1,mid+1,j);
    invert[node]=invert[node*2]+invert[node*2+1];

}
void update(int node,int i,int j,int l,int h)
{
    if(i>h || j<l)
        return ;
    if(i>=l && j<=h)
    {
        invert[node]=(1-invert[node]);
        return;
    }
    int mid=(i+j)/2;
    update(node*2,i,mid,l,h);
    update(node*2+1,mid+1,j,l,h);
}

int query(int node,int i,int j,int l,int c=0)
{
    if(i>l || j<l)
        return 0;
    if(i==l && i==j)
        return invert[node]+c;
    int x,y,mid=(i+j)/2;
    x=query(node*2,i,mid,l,c+invert[node]);
    y=query(node*2+1,mid+1,j,l,c+invert[node]);
    return x+y;
}

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n,q,i,t,x,y,cas=0;
    cin>>t;
    string s;
    char c;
    while(t--)
    {
        cin>>s;
        n=s.size();
        init(1,0,n-1);
        cin>>q;
        printf("Case %d:\n",++cas);
        while(q--)
        {
            cin>>c;
            if(c=='I')
            {
                cin>>x>>y;
                update(1,0,n-1,x-1,y-1);
            }
            if(c=='Q')
            {
                cin>>x;
                int m=query(1,0,n-1,x-1);
                if(m%2==1)
                    printf("%d\n",1-(s[x-1]-48));
                else
                    printf("%d\n",s[x-1]-48);
            }
        }


    }

}
