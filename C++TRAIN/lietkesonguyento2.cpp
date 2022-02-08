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
void sangnt(int a[],int m,int n)
{
	for(int i=0;i<=10005;i++) a[i]=1;
	a[0]=0;a[1]=0;
	for(int i=2;i*i<=10005;i++)
	{
    	for(int j=i*i;j<=10005;j=j+i)
		{
	    	if(j%i==0) a[j]=0;
		}
	}
	for(int i=m;i<=n;i++)
	{
		if(a[i]==1) cout<<i<<" ";
	}
}
int main()
{
        faster();
        int t;
	cin>>t;
    int a[100005];
	while(t--)
	{
		int m,n;
		cin>>m>>n;
		sangnt(a,m,n);
		cout<<endl;
	}
    return 0;
}