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
struct cmp{
bool operator()(int a,int b) {return a>b;}
};
int main()
{
  faster();
  int t;
  cin>>t;
  while(t--)
  {
      multiset <int,cmp> s;
      multiset<int>:: iterator i;
      int n,k;
      cin>>n>>k;
      FOR(i,n)
      {
          int x;
          cin>>x;
          s.insert(x);
      }
          ll dem=0;
          for(i=s.begin();i!=s.end();i++)
          {
              if(dem<k){cout<<*i<<' ';dem++;}
              else break;
          }
          cout<<endl;
  }
  return 0;
}