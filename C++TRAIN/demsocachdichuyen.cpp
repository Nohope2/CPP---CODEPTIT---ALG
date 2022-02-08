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
int n,k,a[200][200];
void init()
{
    cin>>n>>k;
    FORS(i,1,n)
    {
        FORS(j,1,n) cin>>a[i][j];
    }
}
void Try(int i,int j, int &dem,int sum,int k)
{
    if(i==n&&j==n&&sum==k)
    {
       dem++;
       return;
    }
    if(i<n)
    {
        Try(i+1,j,dem,sum+a[i+1][j],k);
    }
    if(j<n) Try(i,j+1,dem,sum+a[i][j+1],k);
    if(i<n&&j<n&&sum>k||i>n||j>n) return;
}
int main()
{
  faster();
  int t;
  cin>>t;
  while(t--)
  {
      init();
      int dem=0;
      int sum=a[1][1];
      Try(1,1,dem,sum,k);
      cout<<dem<<endl;
  }
  return 0;
}