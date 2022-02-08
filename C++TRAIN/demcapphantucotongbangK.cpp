#include<bits/stdc++.h>
#define pb push_back
#define sz(x) x.size()
#define FOR(i,n) for(int i=0;i<n;i++)
#define FORS(i,a,b) for(int i=a;i<=b;i++)
#define FOD(i,m,n) for(int i=m;i>=n;i--)
#define faster() ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define endl "\n"
using namespace std;
typedef double ld;
typedef long long ll;
typedef vector<ll> vll;
typedef pair<int,int> II;
const ld pi=2*acos(0);
int main()
{
  faster();
    ll n,k,t;
	cin>>t;
	while(t--)
	{
		cin >> n >> k;
		map<ll,ll>mp;
		vector<ll> arr(n);
		FOR(i,n)
		{
			cin >> arr[i];
			mp[arr[i]]++;
		}
		ll res = 0;
		FOR(i,n)
		{
			if (arr[i]==k-arr[i]) res+= (mp[arr[i]] - 1);
			else res+= (mp[k - arr[i]]);
		}
		res/= 2;
		cout<<res<<endl;
	}
    return 0;
}