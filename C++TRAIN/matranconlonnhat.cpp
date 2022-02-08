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
int m,n,a[505][505],dp[505][505];
void process()
{
    memset(dp,0,sizeof(dp));
    cin>>m>>n;
    FORS(i,1,m)
    {
        FORS(j,1,n)
        {
           cin>>a[i][j];dp[i][j]=a[i][j];
        } 
    }
    int res=0;
    FORS(i,1,m)
    {
        FORS(j,1,n)
        {
           if(!a[i][j]) continue;
           if(a[i][j]==a[i-1][j-1]&&a[i][j]==a[i-1][j]&&a[i][j]==a[i][j-1])
            dp[i][j]=min(dp[i-1][j-1],min(dp[i-1][j],dp[i][j-1]))+1;
            res=max(res,dp[i][j]);
        } 
    }
    cout<<res<<endl;
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