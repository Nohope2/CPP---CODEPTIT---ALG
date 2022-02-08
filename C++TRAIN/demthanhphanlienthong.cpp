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
vll res[1005];
bool ok[1005];
void DFS(int u,int &dem)
{
    ok[u]=true;
    FOR(i,sz(res[u]))
      if(!ok[res[u][i]]) 
      {
          DFS(res[u][i],dem);
          dem++;
      }
}
int main()
{
      faster();
      memset(ok,false,sizeof(ok));
      int a,b;
      cin>>a>>b;
      FOR(i,b)
      {
          int u,v;
          cin>>u>>v;
          res[u].pb(v);
          res[v].pb(u);
      }
      FORS(i,1,a) sort(res[i].begin(),res[i].end());
      int tmp=0;
      FORS(i,1,a)
      {
           int dem=0;
          if(!ok[i])
          {
             //dem++;
             DFS(i,dem);
          }
          tmp=max(tmp,dem);
      }
      cout<<tmp+1;
  return 0;
}