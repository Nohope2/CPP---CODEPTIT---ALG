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
  ll t;
  cin>>t;
  while(t--)
  {
      ll n,k,cmp=1;
      cin>>n>>k;
      ll dem=0;
      FORS(i,2,sqrt(n))
      {
          while(n%i==0)
          {
              n/=i;dem++;
              if(dem==k)
              {
                  cout<<i<<endl;
                  break;
              }
          }
          if(dem==k) 
          {
              cmp=0;
              break;
          }
      }
     if(cmp!=0)
     {
         if(n>1)
         {
             dem++;
             if(dem==k) cout<<n<<endl;
             else cout<<"-1"<<endl;
         }
         else
         {
             if(dem!=k) cout<<"-1"<<endl;
         }
     }
  }
  return 0;
}