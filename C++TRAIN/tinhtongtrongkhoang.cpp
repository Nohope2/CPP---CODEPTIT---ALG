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
int main()
{
  faster();
  vll res;
  ll t,m,n;
  cin>>t;
  while(t--)
  {
     cin>>m>>n;
     FOR(i,m)
     {
         ll tmp;cin>>tmp;
         res.pb(tmp);
     }
     ll k=res.size();
     while(n--)
     {
         ll x,y;
         cin>>x>>y;
         cout<<accumulate(res.begin()+x-1,res.end()-k+y,0)<<endl;
     }
     cout<<endl;
     res.clear();
  }
  return 0;
}