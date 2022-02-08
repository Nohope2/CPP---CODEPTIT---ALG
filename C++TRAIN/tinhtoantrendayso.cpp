#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef long long ll;
const ll MOD = 1e9+7;
ll a[10005];
ll Powsuper(ll a, ll b){
    if (b == 1) return a;
    if (b % 2 == 0) return Powsuper(a*a%MOD,b/2)%MOD;
    else return a*Powsuper(a*a%MOD,b/2)%MOD;
}
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
    ll T;
    cin>>T;
    while (T--)
    {
	     ll n;
	    cin>>n;
	    ll t = 1;
	    for(int i=0;i<n;i++){
	        cin >> a[i];
	        t*=a[i];
	        t%=MOD;
	    }
	    ll u=a[0];
	    for(int i=1;i<n;i++) u=__gcd(a[i],u);
	    ll res=Powsuper(t,u);
	    cout <<res<<endl;
    }
    return 0;
}   