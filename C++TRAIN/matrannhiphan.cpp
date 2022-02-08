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
  int n; cin >> n;
	int a[n][3];
	int ans = 0, cnt = 0;
	FOR(i,n){
		cnt = 0;
		FOR(j,3){
			cin >> a[i][j];
			cnt += a[i][j];
		}
		if(cnt >= 2) ++ans;
	}
	cout << ans << endl;
  return 0;
}