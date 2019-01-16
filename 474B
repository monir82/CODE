#include<bits/stdc++.h>
int binarysearch(int a[],int i,int j,int x);
using namespace std;
main()
{
    int n;
    cin>>n;
    int a[n],b[n+1]={0},c=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        c+=a[i];
        b[i+1]=c;
    }
    int s;
    cin>>s;
    int d[s],x;
    for(int i=0;i<s;i++)
    {
        cin>>x;
        d[i]=binarysearch(b,0,n,x);
    }
    for(int i=0;i<s;i++)
    {
        cout<<d[i]<<endl;
    }

}
int binarysearch(int a[],int i,int j,int x)
{
    if(a[i]<x && a[j]>=x)
    {
        int mid=i+(j-i)/2;
        if(i+1==j)
           {
               return j;
           }
        if(a[mid]>=x)
        {
            binarysearch(a,i,mid,x);
        }
        else
        {
            binarysearch(a,mid,j,x);
        }
    }
}
