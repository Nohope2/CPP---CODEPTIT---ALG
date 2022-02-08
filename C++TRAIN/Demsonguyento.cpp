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
bool check[100005];
void solve()
{
    FOR(i,100000) check[i]=true;
    check[0]=check[1]=false;
    for(int i=2;i*i<=100000;i++)
    {
        if(check[i]==false) continue;
        for(int j=i*i;j<=100000;j+=i)
        {
            check[j]=false;
        }
    }
}
int main()
{
  faster();
  solve();
  int t;
  cin>>t;
  while(t--)
  {
      int a,b;
      cin>>a>>b;
      int dem=0;
      FORS(i,a,b)
      {
          if(check[i]) dem++;
      }
      cout<<dem<<endl;
  }
  return 0;
}