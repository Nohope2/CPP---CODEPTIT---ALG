#include<bits/stdc++.h>
using namespace std;
int a[1005]={},n,k;
void init()
{
	cin>>k>>n;
	for(int i=1;i<=k;i++) a[i]=i;
}
void Quaylui(int i)
{
	for(int j=a[i-1]+1;j<=n-k+i;j++)
	{
		a[i]=j;
		if(i==k)
		{
			for(int l=1;l<=k;l++) cout<<a[l]<<" ";
            cout<<endl;
		}
		else Quaylui(i+1);
	}
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
		init();
		Quaylui(1);
	return 0;
}