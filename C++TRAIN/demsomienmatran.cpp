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
int n,m, a[105][105];
int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};
 
void DFS(int i, int j){
	a[i][j] = 0;
	FOR(k,8){
		int i1 = i + dx[k];
		int j1 = j + dy[k];
		if(i1 >=0 && i1 <n && j1 >=0 && j1 <m && a[i1][j1]){
			DFS(i1, j1);
		}
	}
}
 
 
int main()
{
	int t; 
    cin >> t;
	while(t--){
		cin >> n >> m;
		FOR(i,n){
			FOR(j,m) cin >> a[i][j];
		}
		int cnt = 0;
		FOR(i,n){
			FOR(j,m){
				if(a[i][j]){
					++cnt;
					DFS(i, j);
				}
			}
		}
		cout<<cnt<< endl;
	}
	return 0;
}