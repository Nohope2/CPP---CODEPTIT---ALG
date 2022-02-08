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
void TC(){
	int n,m; cin >> n >> m;
	int a[n][m], b[n][m];
	FOR(i,n){
		FOR(j,m){
			cin >> a[i][j];
		}
	}
	int h1 = 0, h2 = n-1, c1 = 0, c2 = m-1;
	while(h1 <= h2 && c1 <= c2){
		for(int i = c1 ; i <= c2; i++){
			cout << a[h1][i]<<" ";
		}
		++h1;
		for(int i = h1; i <= h2; i++){
			cout <<a[i][c2]<<" ";
		}
		c2--;
		if(h1<=h2){
			for(int i = c2 ; i>= c1; i--){
				cout <<a[h2][i]<<" ";
			}
			--h2;
		}
		if(c1 <= c2){
			for(int i = h2 ; i >= h1 ;i--){
				cout << a[i][c1] << " ";
			}
			++c1;
		}
	}
	cout << endl;
}
 
int main()
{
     faster();
	int t; 
    cin >> t;
	while(t--){
		TC();
	}
}