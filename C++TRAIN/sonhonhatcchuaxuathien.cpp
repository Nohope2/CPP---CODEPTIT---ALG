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
struct cmp{
bool operator()(int a,int b) {return a<b;}
};
ll t,n;
vll res;
void process()
{
   cin>>n;
   set<ll,cmp>s;
   set<ll>::iterator it;
   FOR(i,n)
   {
       ll tmp;cin>>tmp;
       if(tmp>=0)  s.insert(tmp); 
   }
   if(s.empty())
   {
       cout<<1<<endl;return;
   }
  for(it=s.begin();it!=s.end();it++) res.pb(*it);
  if(res[0]==0&&res[1]!=1) 
  {
      cout<<"1"<<endl;
      return;
  }
  if(res[0]==0&&res[1]==1) res.erase(res.begin());
   ll x=1;
   FOR(i,sz(res))
   {
       if(res[i]==x) x++;
       else break;
   }
   cout<<x<<endl;
   res.clear();
   s.clear();
}
int main()
{
  ll t;
  cin>>t;
  while(t--)
  {
      process();
  }
  return 0;
}