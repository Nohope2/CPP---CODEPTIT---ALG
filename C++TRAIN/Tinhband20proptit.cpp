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
ll a[1000005],b[1000005];
int main()
{
  faster()
  ll n,m;
  cin>>n>>m;
  FOR(i,n) cin>>a[i];
  sort(a,a+n);
  FORS(i,1,n-1) a[i]=a[i]+a[i-1];
  FOR(i,m) cin>>b[i];
  sort(b,b+m);
  int q;
  cin>>q;
  FOR(i,q) 
  {
     int k;
     cin>>k;
     ll sum=a[n-1]-a[n-k-1];
     ll x=binary_search(b,b+m,sum);
     if(x==1) cout<<"YES"<<endl;
     else cout<<"NO"<<endl;
  }

  return 0;
}