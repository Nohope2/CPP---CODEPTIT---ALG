#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll PowSuper(ll x, ll y ,ll m)
{
    if (y==0) return 1;
    if (y==1) return x;
    if (y%2==0) return PowSuper((x*x)%m,y/2,m)%m;
    return x*PowSuper((x*x)%m,y/2,m)%m;
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);cout.tie(NULL);
    ll T;
    cin>>T;
    while(T--)
	{
	    string a;
	    ll b,m,sum=0;
	    cin>>a>>b>>m;
	    for(int i=0;i<a.size();i++)
		{
	        sum=sum*10+(a[i]-'0');
	        sum%=m;
	    }
	    ll index=PowSuper(sum,b,m);
	    cout<<index<<endl;
    }
    return 0;
}  