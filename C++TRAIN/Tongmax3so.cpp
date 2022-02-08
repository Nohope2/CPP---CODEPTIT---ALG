#include<bits/stdc++.h>
#include<string>
#include<vector>
#define alphaa "abcdefghijklmnopqrstuvwxyz"
#define ALPHAA "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
#define f(i,a,b) for(int i=a;i<=b;i++)
#define f1(i,n) for(int i=1;i<=n;i++)
#define f0(i,n) for(int i=0;i<n;i++)
#define ff(i,b,a) for(int i=b;i>=a;i--)
#define el cout<<'\n'
#define fi first
#define se second
#define pb push_back
#define pk pop_back
#define pii pair<int,int>
#define pll pair<ll,ll>
using namespace std;
typedef long long ll;
const int N=1e6+3;
const int MOD=1e9+7;
void xuly()
{
    int n;
    cin>>n;
    int a[n+2];
    f1(i,n) cin>>a[i];
    int ma1=*max_element(a+1,a+n+1);
    int dem=0;
    f1(i,n) if(a[i]==ma1) dem++;
    if(dem>=3) return cout<<ma1*3<<'\n',void();
    if(dem==2)
    {
       int ma2=ma1;
       int ma3=-1e9;
       f1(i,n)
       {
           if(a[i]<ma1) ma3=max(ma3,a[i]);
       }
       cout<<ma1*2+ma3<<'\n';
    }
    else
    {
        int ma2=-1e9,ma3=-1e9;
        f1(i,n) if(a[i]<ma1) ma2=max(ma2,a[i]);
        f1(i,n) if(a[i]<ma2) ma3=max(ma3,a[i]);
        cout<<ma1+ma2+ma3<<'\n';
    }
}
int main()
{
  ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
  int t;
  cin>>t;
  while(t--) xuly();
}