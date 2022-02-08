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
struct box
{
    int val,col;
};
bool cmp(box a,box b)
{
    if(a.val==b.val) return a.col<b.col;
    return a.val<b.val;
}
int main()
{
  faster();
  int n;
  cin>>n;
  vector<box>a(n);
  FOR(i,n) cin>>a[i].val>>a[i].col;
  sort(a.begin(),a.end(),cmp);
  int sum=0;
  FOR(i,n)
  {
      if(sum<a[i].val) sum=a[i].val;
      sum+=a[i].col;
  }
  cout<<sum;
  return 0;
}