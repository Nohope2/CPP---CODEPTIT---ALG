#include<bits/stdc++.h>
#define mp make_pair
#define fi first
#define se second
#define pb push_back
#define alphaa "abcdefghijklmnopqrstuvwxyz"
#define ALPHAA "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
#define sz(x) x.size()
#define FOR(i,a,b) for(int i=a;i<=b;i++)
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
  ll n;cin>>n;
  vll a;
  FOR(i,0,n-1) 
  {
      ll tmp;
      cin>>tmp;
      a.pb(tmp);
  }
  vll res;
  stack<ll>s;
  FOR(i,0,sz(a)-1)
  {
     ll x=a[i],r=i;
     FOR(j,i+1,sz(a))
     {
         if(a[j]>a[i])
         {
            r=j;
            break;
         }
     }
     if(r>i)
     {
         bool check=false;
        FOR(k,r+1,sz(a)-1)
        {
            if(a[k]<a[r])
            {
                res.pb(a[k]);check=true;
                break;
            }
        }
        if(check==false) res.pb(-1);
     }
     else
     {
         s.push(-1);
          bool check=false;
        FOR(k,r+1,sz(a)-1)
        {
            if(a[k]<s.top())
            {
                res.pb(a[k]);check=true;break;
            }
        }
        s.pop();
        if(check==false) res.pb(-1);
     }
  }
  FOR(i,0,sz(res)-1) cout<<res[i]<<' ';
  return 0;
}