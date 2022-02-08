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
int n;
void process()
{
    vll a;
    cin>>n;
    FOR(i,n) 
    {
        ll tmp;cin>>tmp;
        a.pb(tmp);
    }
    sort(a.begin(),a.end());
    ll Min=9999999999;
    FORS(i,1,sz(a)-1) Min=min(Min,a[i]-a[i-1]);
    cout<<Min<<endl;
}
int main()
{
  faster();
  int t;
  cin>>t;
  while(t--)
  {
      process();
  }
  return 0;
}