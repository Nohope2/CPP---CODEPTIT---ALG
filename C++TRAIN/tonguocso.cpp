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
vll a(2e6+5);
void solve()
{
    for(int i=2;i*i<=2e6;i++)
    {
        if(a[i]==0)
        {
            for(int j=i*i;j<=2e6;j+=i)
            {
                if(a[j]==0) a[j]=i;
            }
        }
    }
    for(int i=2;i<=2e6;i++)
    {
        if(a[i]==0) a[i]=i;
    }
}
int main()
{
  faster();
  solve();
  int n;
  cin>>n;
  ll s=0;
  int k;
  while(n--)
  {
      cin>>k;
      while(k!=1)
      {
          s+=a[k];
          k/=a[k];
      }
  }
  cout<<s;
  return 0;
}