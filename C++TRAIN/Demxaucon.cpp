#include<bits/stdc++.h>
#define pb push_back
#define sz(x) x.size()
#define f0(i,n) for(int i=0;i<n;i++)
#define f1(i,a,b) for(int i=a;i<=b;i++)
#define f2(i,m,n) for(int i=m;i>=n;i--)
#define faster() ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define endl "\n"
using namespace std;
typedef double ld;
typedef long long ll;
typedef vector<ll> vll;
typedef pair<int,int> II;
int main()
{
  faster();
  int t;
	cin>>t;
	while(t--)
    {
		string a;
		int k;
		cin>>a>>k;
		int b[26]={},n=a.size(),ss=0;
		for(int i=0;i<n;i++)
        {
			int b[26]={},l=n,s=0,r=n;
			for(int j=i;j<n;j++)
            {
				if(b[a[j]-'a']==0) s++;
				b[a[j]-'a']++;
				if(s==k){
					l=j;
					break;
				}
			}
			for(int j=l+1;j<n;j++){
				if(b[a[j]-'a']==0){
					r=j;
					break;
				}
			}
			if(l<=r) ss+=r-l;
		}
		cout<<ss<<endl;
	}
  return 0;
}