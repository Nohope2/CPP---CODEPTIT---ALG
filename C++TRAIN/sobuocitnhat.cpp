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
  int t;
  cin>>t;
  while(t--)
  {
      int n;
      cin>>n;
      int a[n+5],res=0;
      FORS(i,1,n) cin>>a[i];
      int dp[n+5]={0};
      FORS(i,1,n)
      {
          dp[i]=1;
          FORS(j,1,i-1)
          {
              if(a[i]>=a[j]) dp[i]=max(dp[i],dp[j]+1);
          }
          res=max(res,dp[i]);
      }
      cout<<n-res<<endl;
  }
  return 0;
}