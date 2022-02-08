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
struct Box
{
  ll w, d, h;
};
bool cmp(Box a,Box b)
{
    if( a.w == b.w ) {
		if( a.d == b.d ) return a.h > b.h ;
		else return a.d > b.d;
	}
	return a.w > b.w;
}
int main()
{
  int n;
  cin>>n;
  vector<Box>arr(n);
  FOR(i,n)
  {
      cin>>arr[i].w>>arr[i].d>>arr[i].h;
  }
  sort(arr.begin(),arr.end(),cmp);
   ll L[n];
   FOR(i,n) L[i] = arr[i].h;
   ll res = L[0];
  FORS(i,1,n-1)
   {
      FOR(j,i)
      {
         if ( arr[i].w < arr[j].w && arr[i].d < arr[j].d && L[i] < L[j] + arr[i].h)
         {
              L[i] = L[j] + arr[i].h;
         }
      }
         res=max(res,L[i]);
   }
   cout<<res;
  return 0;
}