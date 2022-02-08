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
vector<string>v;
bool kt(string s)
{
  ll a=0;
  f0(i,s.size())
  {
    if(!isdigit(s[i])) return 0;
    a=a*10+(s[i]-'0');
  }
  string t=to_string(a);
  if(t.size()<=9) return 1;
  return 0;
}
int main()
{
  ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
  fstream in;
  in.open("DATA.in",ios::in);
  string s;
  while(in>>s)
  {
      if(!kt(s)) v.pb(s);
  }
  in.close();
  sort(v.begin(),v.end());
  for(auto i:v) cout<<i<<' ';
}