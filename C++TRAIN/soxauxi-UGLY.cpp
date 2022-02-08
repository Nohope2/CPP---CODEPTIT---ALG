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
ll dp[10005];
void XauXi()
{
    ll i2=1,i3=1,i5=1;
    dp[1]=1;
    FORS(i,2,10000)
    {
        dp[i]=min(dp[i2]*2,min(dp[i3]*3,dp[i5]*5));
        if(dp[i]==dp[i2]*2) i2+=1;
        if(dp[i]==dp[i3]*3) i3+=1;
        if(dp[i]==dp[i5]*5) i5+=1;
    }
}
int main()
{
  faster();
  XauXi();
  int t;
  cin>>t;
  while(t--)
  {
     ll n;
     cin>>n;
     cout<<dp[n]<<endl;
  }
  return 0;
}