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
      ll a,b;
      cin>>a>>b;
      vll res[a+5];
      FOR(i,b)
      {
          ll u,v;
          cin>>u>>v;
          res[u].pb(v);
          res[v].pb(u);
      }
     FORS(i,1,a) sort(res[i].begin(),res[i].end());
     FORS(i,1,a)
     {
         if(sz(res[i])>0)
         {
         cout<<"Dinh ke cua"<<' '<<i<<" :";
         FOR(j,sz(res[i])) cout<<' '<<res[i][j];
         cout<<endl;
         }
     }
  return 0;
}