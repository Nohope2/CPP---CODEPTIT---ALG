#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;
typedef long long ll;
ll n,k,a[100005];
void init()
{
	cin>>n>>k;
	for(int i=1;i<=n;i++) cin>>a[i];
}
void solve()
{
	int dc=lower_bound(a+1,a+n+1,k)-a;
	if(a[dc]==k) cout<<dc<<endl;
	else cout<<"NO"<<endl;
}
int main(){
 
	faster();
	int T;
	cin >> T;
	while(T--)
	{
		init();
		solve();
	}
	return 0;
}