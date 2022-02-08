#include<stdio.h>
#include<math.h>
typedef long long ll;
ll a[1000005],b[1000005],c[1000005],m,n,p;
void init()
{
	scanf("%lld%lld%lld",&m,&n,&p);
	for(int i=0;i<m;i++) scanf("%lld",&a[i]);
	for(int i=0;i<n;i++) scanf("%lld",&b[i]);
	for(int i=0;i<p;i++) scanf("%lld",&c[i]);
}
ll chatnhiphan(ll c[],ll l, ll r,ll x)
{
	while(l<=r)
	{
		ll m=(r+l)/2;
		if (c[m]==x) return m;
		else if (c[m]<x) l=m+1;
		else r=m-1;
		
	}
	return -1;
}
void process()
{
	ll kt=0,k=0,l=0;
	for(ll i=k;i<m;i++)
	{
		for(ll j=l;j<n;j++)
		{
			if(a[i]<b[j])
			{
				k=i+1;break;
			}
			if(a[i]==b[j])
			{
				ll x=a[i];
				ll index=chatnhiphan(c,0,p-1,x);
				if(index!=-1)
				{
					kt=1;
					k=i+1;
				   printf("%lld ",c[index]);
				   break;
				}
			}
			if(b[j]<a[i]) l=j+1;
		}
	}
	if(kt==0) printf("-1");
	printf("\n");
}
int main()
{
	ll t;
	scanf("%lld",&t);
	while(t--)
	{
		init();
		process();
	}
}