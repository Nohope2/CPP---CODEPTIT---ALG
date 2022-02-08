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
  int t;
	cin>>t;
	while(t--){
		int n,m;
		ll s=0;
		cin>>n>>m;
		ll a[n][m],b[5][5];
		FOR(i,n)
        {
			FOR(j,m) cin>>a[i][j];
		}
		FOR(i,3) cin>>b[i][0]>>b[i][1]>>b[i][2];
		FOR(i,n-2)
        {
			FOR(j,m-2)
            {
				FORS(l,i,i+2)
                {
					FORS(k,j,j+2) s+=a[l][k]*b[l-i][k-j];
				}
			}
		}
		cout<<s<<endl;
	}
  return 0;
}