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
int main()
{
  faster();
  stack<char>s;
  vector<char>res;
  string tmp;
  cin>>tmp;
  FOR(i,sz(tmp))
  {
      if(tmp[i]>='0'&&tmp[i]<='9') res.pb(tmp[i]);
      else s.push(tmp[i]);
  }
  while(!s.empty())
  {
      cout<<s.top();
      s.pop();
  }
  cout<<endl;
   FOR(i,sz(res)) cout<<res[i];

  return 0;
}