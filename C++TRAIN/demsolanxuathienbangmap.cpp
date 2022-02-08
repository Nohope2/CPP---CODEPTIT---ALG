#include <iostream>
#include <map>
#define endl "\n"
using namespace std;
int a[1003];
int b[1005]={};
int main()
{
       ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
        int n,k;
        cin>>n>>k;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            b[a[i]]++;
        }
        int l=0,x=0;
       for(int i=1;i<=k;i++)
       {
           if(b[i]>l) l=b[i];
       }
       for(int i=1;i<=k;i++)
       {
           if(x<b[i]&&b[i]!=l)
           {
               x=b[i];
           }
       }
       if(x==0) cout<<"NONE";
       else
       {
       for(int i=1;i<=k;i++)
       {
           if(b[i]==x)
           {
               cout<<i;break;
           }
       }
       }
}