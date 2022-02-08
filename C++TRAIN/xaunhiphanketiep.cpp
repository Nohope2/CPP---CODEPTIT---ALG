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
    int i=sz(s)-1;
    while(i>=0&&s[i]=='1') 
    {
        s[i]='0';
        i--;
    }
    if(i<0)
    {
        FOR(i,sz(s)) cout<<0;
        cout<<endl;
    }
    else
    {
         s[i]='1';
         cout<<s<<endl;
    }
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