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
void BFS(ll u)
{
    queue<int> q;
   q.push(u);
    while(!q.empty())
    {
         u=q.front();
         cout<<u<<' ';
         q.pop();
         ok[u]=false;
       FOR(i,sz(res[u]))
        {
            if(ok[res[u][i]])
            {
                q.push(res[u][i]);
                ok[res[u][i]]=false;
            }
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
      FOR(i,1005) res[i].clear();
      memset(ok,true,sizeof(ok));
      ll a,b,lert;
      cin>>a>>b>>lert;
      FOR(i,b)
      {
          ll u,v;
          cin>>u>>v;
          res[u].pb(v);
      }
     FORS(i,1,a) sort(res[i].begin(),res[i].end());
      BFS(lert);
      cout<<endl;
  }
  return 0;
}