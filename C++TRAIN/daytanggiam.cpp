#include<bits/stdc++.h>
#define pb push_back
#define sz(x) x.size()
#define FOR(i,n) for(int i=0;i<n;i++)
#define FORS(i,a,b) for(int i=a;i<=b;i++)
#define FOD(i,m,n) for(int i=m;i>=n;i--)
#define faster() ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define endl "\n"
using namespace std;
typedef double ld;
typedef long long ll;
typedef vector<ll> vll;
typedef pair<int,int> II;
const ld pi=2*acos(0);
ll a[1005],f[1005],d[1005],n;
void QHD(ll a[],ll f[])
{
    FOR(i,n)
    {
        f[i]=a[i];
        FOR(j,i)
        {
            if(a[i]>a[j]) f[i]=max(f[i],f[j]+a[i]);
        }
    }
}
void process()
{
  ll sum=0;
  cin>>n;
  FOR(i,n) cin>>a[i];
  QHD(a,f);
  reverse(a,a+n);
  QHD(a,d);
  FOR(i,n) sum=max(sum,f[n-i-1]+d[i]-a[i]);
  cout<<sum;
}
int main()
{
  faster();
  process();
  return 0;
}