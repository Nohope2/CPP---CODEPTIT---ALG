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
		int x,d=0,ok=1;
		cin>>x;
		for(int i=1;i<=x;i++)
        {
			if(__gcd(i,x)==1) d++;
		}
		for(int i=2;i<=sqrt(d);i++)
        {
			if(d%i==0){
				ok=0;
				break;
			}
		}
		if(ok==0||d==0||d==1) cout<<"0\n";
		else cout<<"1\n";
	}
  return 0;
}