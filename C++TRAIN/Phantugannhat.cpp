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
		int n,k,x,l,r;
		cin>>n;
		vector <int> a(n);
		for(int i=0;i<n;i++) cin>>a[i];
		cin>>k>>x;
		int m=lower_bound(a.begin(),a.end(),x)-a.begin();
		if(a[m]==x)
        {
			r=m+1;
			l=m-1;
		}
		else
        {
			r=m;
			l=m-1;
		}
		for(int i=k/2-1;i>=0;i--){
			cout<<a[l-i]<<" ";
		}
		for(int i=0;i<k/2;i++){
			cout<<a[r+i]<<" ";
		}
		cout<<endl;
	}
  return 0;
}