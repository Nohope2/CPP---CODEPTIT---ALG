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
bool operator()(int a,int b) {return a<b;}
};

int main()
{
   ll t;
  cin>>t;
  while(t--)
  {
      ll n;
      cin>>n;
      string s;
      cin.ignore();
      set<ll,cmp>res;
      set<ll>::iterator i;
      while(n--)
      {
        cin>>s;
        FOR(i,sz(s))
        {
            ll x=s[i]-'0';
            res.insert(x);
        }
      }
    for(i=res.begin();i!=res.end();++i) cout<<*i<<' ';
    cout<<endl;
  }
  return 0;
}