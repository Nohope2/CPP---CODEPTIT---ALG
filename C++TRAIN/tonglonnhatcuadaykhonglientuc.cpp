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
struct Box
{
	ll Sum;
	ll dem;
};
int main(){
    faster();
    int n,k;
	cin >> n >> k;
	vll a(n+5,0);
	vector<Box> f(n+5);
	FORS(i,1,n) {
		cin >> a[i];
		f[i].Sum = -1e18;
		f[i].dem = 1e18;
	}
	f[0].Sum = 0;
	f[0].dem = 0;
	FORS(i,1,n) 
    {
		FORS(j,max(0,i-k),i-1) 
        {
			if( f[i].Sum < f[j].Sum ) 
            {
				f[i].Sum = f[j].Sum;
				f[i].dem = f[j].dem;
			}
			else if( f[i].Sum == f[j].Sum && f[i].dem > f[j].dem ) {
				f[i].dem = f[j].dem;			
			}
		}
		f[i].Sum+=a[i];
		f[i].dem++;
	}
	ll value = -1e18 , dem = 1e18 ;
	FORS(i,0,n) {
		if( value < f[i].Sum ) {
			value = f[i].Sum ;
			dem = f[i].dem ;
		}
		else if( value==f[i].Sum && dem > f[i].dem) dem = f[i].dem ;
	} 
	cout << value << ' ' << dem ;
}