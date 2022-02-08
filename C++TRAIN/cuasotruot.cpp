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
	int n; 
    cin >> n;
	int a[n+1][n+1];
	FORS(i, 1, n){
		FORS(j, 1, n){
			cin >> a[i][j];
		}
	}
	int m; cin >> m;
	int b[m + 1][m + 1];
	FORS(i,1,m){
		FORS(j,1,m)
			cin >> b[i][j];
	}
	int tmp[n + 1][n + 1];
	FORS(i,1,n){
		FORS(j,1,n){
			int r1 = i % m == 0 ? m : i % m;
			int r2 = j % m == 0 ? m : j % m;
			tmp[i][j] = b[r1][r2];
		}
	}
	FORS(i,1,n)
    {
	   FORS(j,1,n)	
        {
			cout << a[i][j] * tmp[i][j] << " ";
		}
		cout << endl;
    }
  return 0;
}