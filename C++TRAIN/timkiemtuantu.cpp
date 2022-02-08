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
int BIS(vll a,int n,int x)
{
    FOR(i,n)
    {
        if(a[i]==x) return i+1;
    }
    return -1;
}
int main()
{
  faster();
  int t,n,x;
  cin>>t;
  while(t--)
  {
      vll a;
      cin>>n>>x;
      FOR(i,n)
      {
          int tmp;cin>>tmp;
          a.pb(tmp);
      } 
      cout<<BIS(a,n,x)<<endl;
  }
  return 0;
}