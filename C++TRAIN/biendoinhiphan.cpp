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
void process(){
	int n,m; 
    cin >> n >> m;
	int a[n][m], b[n][m];
	FOR(i,n){
		FOR(j,m){
			cin >> a[i][j];
			b[i][j] = a[i][j];
		}
	}
	FOR(i,n){
		FOR(j,m){
			if(a[i][j]){
				FOR(k,m) b[i][k] = 1;
				FOR(k,n) b[k][j] = 1;
			}
		}
	}
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cout <<b[i][j]<<" ";
		}
		cout <<endl;
	}
    cout<<endl;
}
 
int main()
{
	faster();
	int t;
     cin >> t;
	while(t--){
		process();
	}
}