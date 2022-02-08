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
  faster();
  int t;
  cin>>t;
  while(t--)
  {
      ll n,m;
      cin>>n>>m;
      map<ll,ll>mp;
       map<ll,ll>::iterator it;
      FOR(i,n+m)
      {
         int tmp;
         cin>>tmp;mp[tmp]++;
      }
      vll res;
     for (it = mp.begin(); it != mp.end(); ++it)
     {
         cout<<it->first<<' ';
         ll y=it->first;
         ll x=it->second;
         if(x>1) res.pb(y);
     }
     cout<<endl;
     FOR(i,sz(res)) cout<<res[i]<<' ';
     cout<<endl;
  }
  return 0;
}