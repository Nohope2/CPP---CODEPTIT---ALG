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
  ll t;
   ll a,b,c;
  cin>>t;
  while(t--)
  {
      ll a[5];
      FOR(i,3) cin>>a[i];
      sort(a,a+3);
      ll x=a[0],y=a[1],z=a[2];
      if(z>=x+y) cout<<x+y<<endl;
      else
      {
          if(x==1&&x==y&&x==z) cout<<1<<endl;
          else if(x==y&&y==z) cout<<x+1<<endl;
          else cout<<(x+y+z)/2<<endl;
      }
    
  }
  return 0;
}