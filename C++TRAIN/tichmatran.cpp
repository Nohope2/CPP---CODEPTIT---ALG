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
  int n,m,p;
  cin>>n>>m>>p;
  int a[n+1][m+1],b[m+1][p+1];
  FOR(i,n)
   FOR(j,m) cin>>a[i][j];
  FOR(i,m)
   FOR(j,p) cin>>b[i][j];
   int c[n+1][p+1];
   FOR(i,n)
    {
        FOR(j,p)
        {
            c[i][j]=0;
            FOR(k,m)
            {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    FOR(i,n)
    {
        FOR(j,p) cout<<c[i][j]<<' ';
        cout<<endl;
    }
  return 0;
}