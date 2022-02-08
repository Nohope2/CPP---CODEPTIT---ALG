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
ll a,b;
vll res;
queue<ll>num;
void slove()
{
    res.pb(6);
    res.pb(8);
    num.push(6);
    num.push(8);
    while(!num.empty())
    {
        ll tmp=num.front();num.pop();
        ll x=tmp*10+6;
        ll y=tmp*10+8;
        if(x>1e18||y>1e18) break;
        else
        {
            res.pb(x);
            res.pb(y);
            num.push(x);
            num.push(y);
        }
    }
}
void process()
{
   cin>>a>>b;
   ll l,r,check=0,tmp=0;
   FOR(i,sz(res))
   {
       if(res[i]>b) break;
       else
       {
          l=i;
          check=1;
       } 
   }
   FOR(i,sz(res))
   {
       if(res[i]>=a)
       {
         r=i;tmp=1;break;
       }
   }
   if(check==0||tmp==0) cout<<0<<endl;
   else cout<<l-r+1<<endl;
}
int main()
{
  faster();
  slove();
  int t;
  cin>>t;
  while(t--)
  {
      process();
  }
  return 0;
}