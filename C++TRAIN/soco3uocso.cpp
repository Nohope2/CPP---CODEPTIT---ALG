#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
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
	solve();
	ll t;
	cin>>t;
	while(t--)
	{
	ll l;
	cin>>l;
	ll w=sqrt(l);
    if(l>=4)
    {
        for(ll i=2;i<=w;i++)
        {
            if(a[i]==true) cout<<i*i<<' ';
        }
    cout<<'\n';
    }
  }
} 