#include<bits/stdc++.h>
#include<stdio.h>
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
  int n;
  cin>>n;
  double a[n];
  FOR(i,n) cin>>a[i];
  sort(a,a+n);
  double sum=0;
  double dem=0;

  double x=a[n-1],y=a[0];
  FOR(i,n)
  {
      if(a[i]!=x&&a[i]!=y)
      {
          sum+=a[i];
          dem++;
      } 
  }
  printf("%.2lf",sum/dem);
  return 0;
}