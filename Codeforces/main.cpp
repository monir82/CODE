#include<bits/stdc++.h>
using namespace std;
int i,j;
main()
{
   int n,s,count=0;
   cin>>n>>s;
   int square=sqrt(s);
   for(i=1;i<=square && i<=n;i++)
   {
       if(s%i==0)
       {
           if(s/i==i)
           {
               count++;
           }
           else if(s/i>n)
           {
               continue;
           }
           else
            count+=2;
       }
   }
   cout<<count<<endl;
}
