#include<bits/stdc++.h>
using namespace std;
void process()
{
	int n,a[10005];
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i];
	int i=n-1;
	while(i>0&&a[i]<a[i+1]) i-=1;
	if(i<=1)
	{
		for(int i=n;i>=1;i--) cout<<i<<" ";
		cout<<endl;
	}
	else
	{
		int k=n;
		while(a[k]>a[i]) k--;
		swap(a[k],a[i]);
		int l=i+1,r=n;
		while(l<r)
		{
			swap(a[l],a[r]);l++;r--;
		}
		for(int i=1;i<=n;i++) cout<<a[i]<<" ";
		cout<<endl;
	}
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--)
	{
		process();
	}
	return 0;
}