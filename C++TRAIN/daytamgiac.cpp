#include<bits/stdc++.h>
#define pb push_back
#define FOR(i,a) for(int i=0;i<a;i++)
#define faster() ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define endl "\n"
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
int main()
{
  faster();
  int t;
  cin>>t;
  while(t--)
  {
    ll n;
    vll res;
      cin>>n;
      FOR(i,n)
      {
        ll tmp;
        cin>>tmp;
        res.pb(tmp);
      }
      cout<<*max_element(res.begin(),res.end())<<endl;
  }
  return 0;
}