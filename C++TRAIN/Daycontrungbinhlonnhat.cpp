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
		int n,k,s=0,mac=-1e9,l=0,r=k-1;
		cin>>n>>k;
		int a[n];
		for(int i=0;i<n;i++) cin>>a[i];
		for(int i=0;i<k;i++) s+=a[i];
		mac=max(mac,s);
		for(int i=k;i<n;i++){
			s=s+a[i]-a[i-k];
			if(mac<s){
				mac=s;
				l=i-k+1;r=i;
			}
		}
		for(int i=l;i<=r;i++) cout<<a[i]<<" ";
		cout<<endl;
	}
  return 0;
}