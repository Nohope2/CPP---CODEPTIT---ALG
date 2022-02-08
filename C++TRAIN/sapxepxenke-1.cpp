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
  int t;
  cin>>t;
  while(t--)
  {
    int n;
    cin>>n;
    vector<int> a(n);
    FOR(i,n) cin>>a[i];
    sort(a.begin(),a.end());
    int l=0,r=n-1;
    while(l<r)
    {
        cout<<a[r]<<' '<<a[l]<<' ';
        l++;r--;
    }
    if(n%2!=0) cout<<a[l]<<endl;
    else cout<<endl;
  }
  return 0;
}