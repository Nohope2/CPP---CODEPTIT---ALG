#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll powss(ll n, ll m, ll k)
{
	if (!m) return 0;
	if (m%2==0) return powss(n*2%k,m/2,k) % k;
	else return (powss(n%k,m-1,k)%k+n%k) % k;
}
ll luyThua(ll n, ll m, ll k)
{
	if (!m) return 1;
	ll p=luyThua(n,m/2,k);
	ll count=powss(p,p,k);
	if (m%2!=0)  count=powss(count,n,k)%k;
	return count;
}
main(){
	ll t,n,m,k;
	cin >>t;
	while (t--)
	{
		cin>>n>>m>>k;
		cout<<luyThua(n,m,k)<<endl;
	}
} 