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
int n;
vector<int>res;
void process()
{
    set <int,cmp> s;
    cin>>n;
    FOR(i,n)
    {
      int tmp;
      cin>>tmp;
      s.insert(tmp);
    }
    int dem=0;
    for (set<int>:: iterator it = s.begin(); it != s.end(); it++) res.pb(*it);
    FOD(i,sz(res)-1,1) dem+=(res[i]-res[i-1]-1);
    cout<<dem<<endl;
    res.clear();
}
int main()
{
  faster();
  int t;
  cin>>t;
  while(t--) process();
  return 0;
}