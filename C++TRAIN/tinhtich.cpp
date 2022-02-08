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
ll a[1000005],b[1000005],m,n;
void init()
{
    cin>>m>>n;
    FOR(i,m) cin>>a[i];
    FOR(i,n) cin>>b[i];
}
void process()
{
    sort(a,a+m);
    sort(b,b+n);
    cout<<a[m-1]*b[0]<<endl;
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