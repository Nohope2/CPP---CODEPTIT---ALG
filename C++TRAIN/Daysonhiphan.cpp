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
		int n,maxx=0;
	    cin>>n;
	    int a[n+1],b[n+1];
	    a[0]=b[0]=0;
	    f1(i,1,n){
	    	cin>>a[i];
	    	a[i]+=a[i-1];
		}
	    f1(i,1,n){
	    	cin>>b[i];
	    	b[i]+=b[i-1];
		}
	   f1(i,1,n){
	    	for(int j=i+maxx;j<=n;j++){
	    		if(a[j]-a[i-1]==b[j]-b[i-1]){
	    			if(j-i+1>maxx) maxx=j-i+1;
				}
			}
		}
	    cout<<maxx<<endl;
	}
  return 0;
}