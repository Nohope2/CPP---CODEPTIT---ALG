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
ll mat[1005][1005],a[1005][1005];
int n,k;
void init()
{
    cin>>n>>k;
    FOR(i,n)
    {
        FOR(j,n) cin>>mat[i][j];
    }
}
void process()
{
   for (int j=0; j<n; j++)
   {
       ll sum = 0;
       for (int i=0; i<k; i++) sum += mat[i][j];
       a[0][j] = sum;
       for (int i=1; i<n-k+1; i++)
       {
            sum += (mat[i+k-1][j] - mat[i-1][j]);
            a[i][j] = sum;
       }
   }
   ll MAX=0;
   for (int i=0; i<n-k+1; i++)
   {
      ll sum = 0;
      for (int j = 0; j<k; j++) sum += a[i][j];
      MAX=max(MAX,sum);
      for (int j=1; j<n-k+1; j++)
      {
         sum += (a[i][j+k-1]-a[i][j-1]);
         MAX=max(MAX,sum);
      }
   }
   cout<<MAX<<endl;
}
int main()
{
    init();
    process();
    return 0;
}