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
ll count(ll x, ll Y[], int n, ll f[]) {
   if (x == 0) return 0;  
   if (x == 1) return f[0];
   ll *index = upper_bound(Y, Y + n, x);
   ll ans = (Y + n) - index;
   ans += (f[0] + f[1]);
   if (x == 2) ans -= (f[3] + f[4]);
   if (x == 3) ans += f[2];
   return ans;
}
ll MULON(ll X[], ll Y[], int m, int n) {
   ll f[5] = {0};
   for (int i = 0; i < n; i++)
      if (Y[i] < 5) f[Y[i]]++;
   sort(Y, Y + n);
   ll indexx=0;
   for (int i=0; i<m; i++)
      indexx += count(X[i], Y, n, f);
   return indexx;
}
int main() {
    faster();
  int t;
  cin>>t;
  while(t--)
  {
      int m,n;
      cin>>m>>n;
      ll X[100005];
      ll Y[100005];
      FOR(i,m) cin>>X[i];
      FOR(i,n) cin>>Y[i];
      cout<<MULON(X,Y,m,n)<<endl;
  }
}