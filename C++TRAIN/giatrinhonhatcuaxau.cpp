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
  ll t;
  cin>>t;
  while(t--)
  {
      ll k;string s;
      cin>>k>>s;
      ll f[300]={0};
      priority_queue<ll,vll>q;
      FOR(i,sz(s)) f[s[i]]++;
      FOR(i,300) if(f[i]>0) q.push(f[i]);
      while(q.top()!=0&&k>0)
      {
          ll top=q.top();q.pop();
          k--;top--;
          q.push(top);
      }
      ll res=0;
      while(!q.empty())
      {
         res+=q.top()*q.top();
         q.pop();
      }
      cout<<res<<endl;
  }
  return 0;
}