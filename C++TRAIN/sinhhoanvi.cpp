#include<bits/stdc++.h>
using namespace std;
int a[1005]={},n;
bool check[1000];
void Quaylui(int i)
{
	for(int j=1;j<=n;j++)
	{
	    if(!check[j])
	    {
	    	a[i]=j;
	    	check[j]=true;
	    	if(i==n) 
	    	{
		    	for(int l=1;l<=n;l++) cout<<a[l];
				cout<<" ";	
			}
			else Quaylui(i+1);
			check[j]=false;
		}
	}
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cin>>n;
	Quaylui(1);
	return 0;
}