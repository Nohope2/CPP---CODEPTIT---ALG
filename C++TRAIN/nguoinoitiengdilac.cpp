#include<bits/stdc++.h>
#define mp make_pair
#define fi first
#define se second
#define pb push_back
#define alphaa "abcdefghijklmnopqrstuvwxyz"
#define ALPHAA "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
#define sz(x) x.size()
#define FOR(i,n) for(int i=0;i<n;i++)
#define FORS(i,a,b) for(int i=a;i<=b;i++)
#define FOD(i,m,n) for(int i=m;i>=n;i--)
#define PI 3.141592653589793238
#define faster() ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define endl "\n"
using namespace std;
typedef double ld;
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int,int> II;
const ld pi=2*acos(0);
const ll inf  = LLONG_MAX;
const ll ninf = LLONG_MIN;
const int oo = INT_MAX;
const int noo = INT_MIN;
int main()
{
  faster();
  faster();
  ll n;
  cin>>n;
  vector< vector<ll> > a(n,vector<ll>(n));
  deque<ll>st,tmp;
  FOR(i,n)
  {
      FOR(j,n) cin>>a[i][j];
  }
  ll k=0,count;
  FOR(i,n)
  {
    ll check=0;
      if(a[1][i]==1)
      {
        ll dem=1,l=i;
        if(a[i][i]==0)
        {
            FORS(j,2,l-1)
            {
              if(a[j][l]==1) dem++;
            }
            FORS(j,l+1,n-1)
            {
              if(a[j][l]==1) dem++;
            }
        }
        if(dem==n-2)
        {
           count=i;check=1;
           k=1;break;
        }
      }
      if(check==1) break;
  }
  if(k==1) cout<<count<<" "<<"is celebrity";
  else cout<<"No celebrity detected";
   return 0;
}