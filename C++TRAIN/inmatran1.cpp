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
int n,a[300][300];
void init()
{
    cin>>n;
    FOR(i,n)
      FOR(j,n) cin>>a[i][j];
}
void process()
{
    FOR(i,n)
    {
        if(i%2==0) FOR(j,n) cout<<a[i][j]<<' ';
        else FOD(j,n-1,0) cout<<a[i][j]<<' ';
    }
    cout<<endl;
}
int main()
{
  faster();
  int t;
  cin>>t;
  while(t--)
  {
      init();
      process();
  }
  return 0;
}