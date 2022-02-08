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
	while(t--){
		long long n,a=1,b=1;
		cin>>n;
		if(n<=3){
			cout<<"YES"<<endl;
			continue;
		}
		while(a<n){
			long long k=a+b;
			b=a;
			a=k;
		}
		if(a==n) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
  return 0;
}