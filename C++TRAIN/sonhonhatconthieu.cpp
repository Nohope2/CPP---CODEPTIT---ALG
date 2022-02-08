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
int main()
{
  ll t,n;
  vll res;
  cin>>t;
  while(t--)
  {
      cin>>n;
      FOR(i,n-1)
      {
          ll tmp;cin>>tmp;
          res.pb(tmp);
      }
      ll sum=(n*(n+1))/2;
      cout<<sum-accumulate(res.begin(),res.end(),0)<<endl;
      res.clear();
  }
  return 0;
}