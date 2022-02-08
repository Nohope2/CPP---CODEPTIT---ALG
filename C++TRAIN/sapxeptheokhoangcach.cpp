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
struct dta 
{ 
     int count,col,val;
};
 bool cmp(dta a, dta b)
 {
     if(a.col > b.col) return false;
     if(a.col == b.col && a.count> b.count) return false;
     return true;
 }
 int main() 
 {
      faster();
     int t;
     cin>>t;
      while(t--)
       {
            int n, x; 
            cin>>n>>x; 
            int k;
             vector<dta> v;
             FOR(i,n)
              { 
                  cin>>k; 
                  v.push_back({i, abs(x-k), k});
              }
              sort(v.begin(), v.end(),cmp); 
           FOR(i,n) cout<<v[i].val<<' ';
            cout<<endl;
       }
       return 0;
 }