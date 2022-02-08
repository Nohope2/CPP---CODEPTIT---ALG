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
ll bcnn(ll a, ll b){
	ll x=a*b;
	while(b!=0){
        ll x=a%b;
        a=b;
        b=x;
    }
    return x/a;
}
int main(){
	faster();
	int t;
	cin>>t;
	while(t--){
		ll x,y,z,n;
		cin>>x>>y>>z>>n;
		ll s=pow(10,(n-1));
		ll k=bcnn(x,bcnn(y,z));
		if(k>=s*10) cout<<-1<<endl;
		else{
			cout<<k*(long long)ceil(pow(10,n-1)/k)<<endl;
		}
	}
}