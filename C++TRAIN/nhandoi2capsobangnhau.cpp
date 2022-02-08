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
ll n,a[100005];
void init()
{
	cin>>n;
	FOR(i,n) cin>>a[i];
}
void ichanul()
{
	FOR(i,n-1)
	{
		if(a[i]!=0&&a[i]==a[i+1])
		{
			a[i]=a[i]*2;a[i+1]=0;
		}
	}
}
void process()
{
	ll dem=0;
	FOR(i,n)
	{
		if(a[i]!=0) cout<<a[i]<<' ';
		else dem++;
	}
		FOR(i,dem) cout<<0<<' ';
		cout<<endl;
}
int main()
{
    faster();
	int t;
	cin>>t;
	while(t--)
	{
		init();
		ichanul();
		process();
	}
} 