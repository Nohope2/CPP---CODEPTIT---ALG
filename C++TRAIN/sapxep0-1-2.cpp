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
int n;
void process()
{
    cin>>n;
    int b[5]={0};
    FOR(i,n)
    {
        int a;cin>>a;
        b[a]++;
    }
    FORS(i,0,2)
        FOR(j,b[i]) cout<<i<<' ';
    cout<<endl;
}
int main()
{
  faster();
  int t;
  cin>>t;
  while(t--)
  {
      process();
  }
  return 0;
}