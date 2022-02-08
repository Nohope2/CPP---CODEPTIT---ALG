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
bool a[1000000];
void solve()
{
	a[0]=false;
	a[1]=false;
	for(int i=2;i<=1e6;i++) a[i]=true;
	for(int i=2;i*i<=1e6;i++)
	{
		if(a[i]==false) continue;
		for(int j=i*i;j<=1e6;j+=i) a[j]=false;
	}
}
int main()
{
  faster();
  solve();
  ll m,n;
  cin>>m>>n;
  if(m>n) swap(m,n);
  FORS(i,m+1,n)
  {
     if(a[i]==true) cout<<i<<' ';
  }
  return 0;
}