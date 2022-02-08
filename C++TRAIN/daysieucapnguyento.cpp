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
ll NT(ll x)
{
    FORS(i,2,sqrt(x))
    {
        if(x%i==0) return 0;
    }
    return 1;
}
int main()
{
  faster();
  ll n,k;
  cin>>n>>k;
  ll a[n+5];
  FOR(i,n) cin>>a[i];
  do {
      ll dem=0;
      vll res;
        FOR(i,n-k+1)
        {
            ll x=0;
            FORS(j,i,k+i-1)
            {
                x+=a[j];
            }
            res.pb(x);
        }
        FOR(i,sz(res))
        {
            ll x=res[i];
            if(NT(x)) dem++;
        }
        if(dem==sz(res)) 
        {
            FOR(i,n) cout<<a[i]<<' ';
            cout<<endl;
        }
    } while (next_permutation(a, a + n));
 
  return 0;
}