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
vector<string>res;
int main()
{
  faster();
  string s;
  cin>>s;
  int n=sz(s);
  res.pb("44");
  res.pb("47");
  res.pb("74");
  res.pb("77");
  stack<string>p1,p2,p3,p4;
  p1.push("44");
  p2.push("47");
  p3.push("74");
  p4.push("77");
     while(!p1.empty())
     {
         string x=p1.top();
         x+="77"
     }

  return 0;
}