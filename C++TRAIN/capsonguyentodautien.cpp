#include<bits/stdc++.h>
using namespace std;
const int MAX=10000;
bool a[10003];
void slove()
{
	a[0]=false;
	a[1]=false;
	for(int i=2;i<=MAX;i++) a[i]=true;
	for(int i=2;i*i<=MAX;i++)
	{
		if(a[i]==false) continue;
		for(int j=i*i;j<=MAX;j+=i)
		{
			a[j]=false;
		}
	}
}
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
	slove();
    int t;
	cin>>t;
	while(t--)
	{
		int n,k=1;
		cin>>n;
		for(int i=2;i<n;i++)
		{
			if(a[i]==true)
			{
			for(int j=i;j<n;j++)
			{
				if(a[j]==true)
				{
					if(i+j==n)
					{
						k=0;
						cout<<i<<" "<<j<<endl;
						break;
					}
					else continue;
				}
				if(k==0) break;
			}
		   }
		   if(k==0) break;
		}
	}
} 