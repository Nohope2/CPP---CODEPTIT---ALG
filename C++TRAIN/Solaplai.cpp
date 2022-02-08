#include<bits/stdc++.h>
#define pb push_back
#define sz(x) x.size()
#define f0(i,n) for(int i=0;i<n;i++)
#define f1(i,a,b) for(int i=a;i<=b;i++)
#define f2(i,m,n) for(int i=m;i>=n;i--)
#define faster() ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define endl "\n"
using namespace std;
typedef double ld;
typedef long long ll;
typedef vector<ll> vll;
typedef pair<int,int> II;
ll ucln(ll a, ll b) 
{
    while(b!=0)
    {
        ll x=a%b;
        a=b;
        b=x;
    }
    return a;
}
int main(){
    faster();
	int t;
	cin>>t;
	while(t--){
		ll n,x,y;
		cin>>n>>x>>y;
		ll k=ucln(x,y);
		f0(i,k) cout<<n;
		cout<<endl;
	}