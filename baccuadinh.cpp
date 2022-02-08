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
int a[105][105];
int main()
{
    int n,m,u,v;
		cin>>n>>m;
		FORS(i,1,n)
			FORS(j,1,n) a[i][j]=0;
		FORS(i,1,m)
		{
			cin>>u>>v;
			a[u][v]=1;
			a[v][u]=1;
		}
		FORS(i,1,n)
        {
            int dem=0;
            FORS(j,1,n) dem+=a[i][j];
            cout<<dem<<endl;
        }
	return 0;
}