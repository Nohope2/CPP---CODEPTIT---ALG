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
string s;
void process()
{
   cin>>s;
   ll mod2=0;
   FOR(i,sz(s))
   {
      mod2=(2*mod2+s[i]-'0')%5;
   }
   if(mod2==0) cout<<"Yes"<<endl;
   else cout<<"No"<<endl;
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