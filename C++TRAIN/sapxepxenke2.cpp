#include<bits/stdc++.h>
using namespace std;
int n,a[100005];
void init()
{
	cin>>n;
	for(int i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);
}
void xuat()
{
	int l=0,r=n-1;
	while(l<r)
	{
		cout<<a[r]<<" "<<a[l]<<" ";
		l++;r--;
	}
	if(n%2!=0) cout<<a[l];
	cout<<endl;
}
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
	    init();
	    xuat();
	}
} 