#include<bits/stdc++.h>
using namespace std;
long long n,a[100005],b[100005];
void init()
{
    cin>>n;
    for(int i=0;i<n;i++) cin>>a[i];
}
void tich()
{
    for(int i=0;i<n;i++)
    {
        if(i==0) b[i]=a[i]*a[i+1];
        else if(i==n-1) b[i]=a[i]*a[i-1];
        else b[i]=a[i-1]*a[i+1];
    }
}
void xuat()
{
    for(int i=0;i<n;i++) cout<<b[i]<<" ";
    cout<<endl;
}
int main()
{
     ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
     int t;
     cin>>t;
     while(t--)
     {
         init();
         tich();
         xuat();
     }
}  