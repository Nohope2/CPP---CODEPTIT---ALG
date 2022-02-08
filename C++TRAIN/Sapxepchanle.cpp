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
		int n;
		cin>>n;
		int a[n],b[n],j=0;
		for(int i=0;i<n;i++) cin>>a[i];
		sort(a,a+n);
		for(int i=0;i<n;i+=2) b[i]=a[j++];
		for(int i=1;i<n;i+=2) b[i]=a[j++];
		for(int i=0;i<j;i++) cout<<b[i]<<" ";
		cout<<endl;
	}
  return 0;
}