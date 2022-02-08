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
struct dta
{
    int val,pos;
};
bool cmp(dta a,dta b)
{
   if(a.val<b.val) return true;
   if(a.val==b.val&& a.pos<b.pos) return true;
   return false;
}

int main()
{
  faster();
  int t;
  cin>>t;
  while(t--)
  {
     int n;
     cin>>n;
     vector<dta>a(n);
     FOR(i,n)
     {
         cin>>a[i].val;
         a[i].pos=i;
     }
     sort(a.begin(),a.end(),cmp);
     int res=0;
     FOR(i,n)
     {
         while(a[i].pos!=i)
         {
             res++;
             swap(a[i],a[a[i].pos]);
         }
     }
     cout<<res<<endl;

  }
  return 0;
}