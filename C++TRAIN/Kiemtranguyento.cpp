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
int check(int n){
	if(n<2) return 0;
	f1(i,2,sqrt(n))
    {
		if(n%i==0) return 0;
	}
	return 1;
}
int main()
{
	faster();
	int n;
	cin>>n;
	if(check(n)) cout<<"YES";
	else cout<<"NO";
}