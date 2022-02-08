#include<bits/stdc++.h>
#define mp make_pair
#define fi first
#define se second
#define pb push_back
#define alphaa "abcdefghijklmnopqrstuvwxyz"
#define ALPHAA "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
#define sz(x) x.size()
#define FOR(i,n) for(int i=0;i<n;i++)
#define FORS(i,a,b) for(int i=a;i<=b;i++)
#define FOD(i,m,n) for(int i=m;i>=n;i--)
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
string s;
void slove()
{
    cin>>s;
    deque<char>res,tmp;
    FOR(i,sz(s))
    {
        if(isalpha(s[i])) res.pb(s[i]);
        else if(s[i]=='-'&&!res.empty()) res.pop_back();
        else if(s[i]=='>'&&!tmp.empty())
        {
            res.pb(tmp.back());
            tmp.pop_back();
        }
        else if(s[i]=='<'&&!res.empty())  
        {
               tmp.pb(res.back());
               res.pop_back();
        }
    }
   while(!res.empty())
   {
       cout<<res.front();
       res.pop_front();
   }
    while(!tmp.empty())
    {
       cout<<tmp.back();
        tmp.pop_back();
    }
}
int main()
{
  faster();
  slove();
  return 0;
}