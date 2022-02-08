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
 ll m,n,a[500],v[500];
vector< vector<ll> >res;
 void Try(int i)
 {
     FORS(j,0,1)
     {
         a[i]=j;
         if(i==n)
         {
             ll s=0;
             FORS(l,1,n) if(a[l]) s+=v[l];
             if(s==m)
             {
                 vll x;
                 FORS(l,1,n) if(a[l]) x.pb(v[l]);
                 res.pb(x);
             }
         }
         else Try(i+1);
     }
 }
int main()
{
  faster();
     cin>>m>>n;
     FORS(i,1,n) cin>>v[i];
  Try(1);
  FOR(i,sz(res))
  {
      FOR(j,sz(res[i])) cout<<res[i][j]<<' ';
      cout<<endl;
  }
  return 0;
}