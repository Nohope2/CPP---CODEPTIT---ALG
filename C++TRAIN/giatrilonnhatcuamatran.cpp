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
const ld pi=2*acos(0);int major[402][402], minor[402][402] = {0};
int a[402][402];
int main(){
    faster();
		int n; 
        cin >> n;
		FORS(i,1,n)
			FORS(j,1,n) cin >> a[i][j];
		FORS(i,1,n){
			FORS(j,1,n) 
            {
				if(i == 1 || j == 1) major[i][j] = a[i][j];
				else major[i][j] = a[i][j] + major[i - 1][j - 1];
			}
		}
		FORS(i,1,n)
        {
			FOD(j,n,1)
            {
				if(i == 1 || j == n) minor[i][j] = a[i][j];
				else minor[i][j] = minor[i - 1][j + 1] + a[i][j];
			}
		}
		ll ans = -1e18;
		FOD(i,n,1)
        {
			FOD(j,n,1)
            {
				int tmp = min(j, i);
				int hang = i - tmp, cot = j - tmp;
				for(int k = 0; k < min(i, j); k++){
					ans = max(ans, 0ll + major[i][j] - major[hang + k][cot + k] - (minor[i][cot + k + 1] - minor[hang + k][j + 1]));
				}
			}
		}
		cout << ans;
	return 0;
}
