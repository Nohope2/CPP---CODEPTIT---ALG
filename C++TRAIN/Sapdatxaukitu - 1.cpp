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
		string a;
		cin>>a;
		int n=a.size(),b[26]={},s=0;
		for(int i=0;i<n;i++){
			b[a[i]-'a']++;
			s=max(s,b[a[i]-'a']);
		}
		if(s<=(a.size()+1)/2) cout<<1<<endl;
		else cout<<0<<endl;
	}
  return 0;
}