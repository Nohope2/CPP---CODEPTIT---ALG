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
const ll MOD = 1e9+7;
ll index(ll a, ll b){
    if (b==0) return 1;
    if (b==1) return a;
    if (b%2==0) return index((a*a%MOD),b/2)%MOD;
    else return a*index(a*a%MOD,b/2)%MOD;
}
int main(){
    faster();
    int T;
    cin >> T;
    while(T--)
    {
      ll  n,x;
      ll sum = 0;
    cin >> n >> x;
    if (n == 0) cout << 0 << endl;
    else
    {
	    vector<ll>a(n);
	    for(int i=n-1;i>=0;i--) cin >> a[i];
	    for(int i=n-1;i>=0;i--){
	        sum+=a[i]*index(x,i)%MOD;
	        sum%=MOD;
	    }
	    cout<<sum<<endl;
    }
}
    return 0;
}  