#include<bits/stdc++.h>
#define mp make_pair
#define fi first
#define se second
#define pb push_back
#define alphaa "abcdefghijklmnopqrstuvwxyz"
#define ALPHAA "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
#define sz(x) x.size()
#define FORS(i,a,b) for(int i=a;i<=b;i++)
#define FOR(i,a) for(int i=0;i<a;i++)
#define PI 3.141592653589793238
#define faster() ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define endl "\n"
using namespace std;
typedef double ld;
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int,int> II;
const ld pi=2*acos(0);
const ll inf  = LLONG_MAX;
const ll ninf = LLONG_MIN;
const int oo = INT_MAX;
const int noo = INT_MIN;
int main()
{
  faster();
  string s;
  getline(cin,s);
  FOR(i,sz(s)) 
  {
      if(s[i]>='A'&&s[i]<='Z') s[i]+=32;
  }
  int t=0,t2=0;
  vector<string>res;
  while(t<s.size())
  {
      t2=s.find(" ",t);
      if(t!=t2) res.pb(s.substr(t,t2-t));
     if(t2==-1) break;
     else t=t2+1;
  }
    cout<<res[res.size()-1];
    for(int i=sz(s)-1;i>=0;i--)
    {
      if(s[i]==' ') break;
      else s.erase(i,1);
    }
    cout<<s[0];
    FORS(i,1,sz(s)-2)
    {
        if(s[i]==' '&&s[i+1]!=' ') cout<<s[i+1];
    }
    cout<<"@ptit.edu.vn";
  return 0;
}