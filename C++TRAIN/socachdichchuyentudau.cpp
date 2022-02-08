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
vector<string>res;
string v="";
int n,m;
void Try(int i,int j,string v)
{
    if(i==n&&j==m)
    {
        res.pb(v);
    }
    if(i>n&&j>m) return;
    if(j<=m) Try(i,j+1,v+"H ");
    if(i<=n) Try(i+1,j,v+"V ");
}
int main()
{
  faster();
  cin>>n>>m;
  Try(0,0,"");
  FOR(i,sz(res)) cout<<res[i]<<endl;
  return 0;
}