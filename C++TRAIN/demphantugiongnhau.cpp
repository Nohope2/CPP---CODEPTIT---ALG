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
  int TC;
   cin >> TC;
	while(TC--){
		int n; cin >> n;
		int a[105][105];
		FOR(i,n){
			FOR(j,n) cin >> a[i][j];
		}
		int cnt = 0;
		map<int, int> mp;
		FOR(i,n){
			mp[a[0][i]] = 1;
		}
		FORS(i,1,n-1){
			FOR(j,n){
				if(mp[a[i][j]] == i){
					mp[a[i][j]]++;
				}
			}
		}
		for(auto it : mp){
			if(it.second == n){
				++cnt;
			}
		}
		cout << cnt << endl;
	}
  return 0;
}