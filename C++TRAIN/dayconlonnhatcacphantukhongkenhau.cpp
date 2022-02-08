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
  cin>>t;
  while(t--)
  {
      ll n;
      cin>>n;
      ll a[n+5],dp[n+5]={};
      FORS(i,1,n) cin>>a[i];
      dp[1]=a[1];
      dp[2]=max(a[1],a[2]);
      FORS(i,3,n) dp[i]=max(dp[i-2]+a[i],dp[i-1]);
      cout<<dp[n]<<endl;
  }
  return 0;
}