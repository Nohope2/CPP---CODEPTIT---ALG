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
const long long mod=1e9+7;
int n,k;
void process()
{
    cin>>n>>k;
    ll dp[100005];
    ll l[100005];
    dp[0]=dp[1]=1;
    l[0]=l[1]=1;
    l[2]=2,dp[2]=2;
    if(k==1) cout<<1<<endl;
    else
    {
      if(n==0||n==1) cout<<1<<endl;
      else if(n==2) cout<<2<<endl;
      else
      {
        FORS(i,3,n)
        {
          if(i<=k)
          {
            dp[i]=l[i-1]+dp[i-1];
          }
          else dp[i]=dp[i-1]+l[i-1]-dp[i-k-1];        
          l[i]=dp[i];
          dp[i]%=mod;
        }
        cout<<dp[n]<<endl;
      }
    }
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