#include<bits/stdc++.h>
using namespace std;
long long xuli(string s,long long n)
{
	long long a,d=0;
	for(long long i=0;i<s.size();i++)
	{
		a=d*10+(s[i]-'0');
		d=a%n;
	}
	return d;
}
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
	cin.ignore();
	string s;
	long long n;
	getline(cin,s);
	cin>>n;
	cout<<xuli(s,n)<<endl;;
}
}  