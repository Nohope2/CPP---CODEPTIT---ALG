#include<bits/stdc++.h>
#define mp make_pair
#define fi first
#define se second
#define pb push_back
#define alphaa "abcdefghijklmnopqrstuvwxyz"
#define ALPHAA "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
#define sz(x) x.size()
#define FORS(i,a,b) for(int i=a;i<=b;i++)
#define FOR(i,a) for(int i=0;i<a;i++)
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
ll a[1005][105]={};
vector<ll>res;
int main()
{
  faster();
  ll t,n,k;
  cin>>t;
  while(t--)
  {
      cin>>n>>k;
      FOR(i,n)
      {
          FOR(j,k)
          {
              cin>>a[i][j];
              res.pb(a[i][j]);
          }
      }
      sort(res.begin(),res.end());
      FOR(i,sz(res)) cout<<res[i]<<' ';
      cout<<endl;
      res.clear();
  }

  return 0;
}