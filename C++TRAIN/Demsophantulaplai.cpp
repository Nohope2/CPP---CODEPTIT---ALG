#include<bits/stdc++.h>
#define pb push_back
#define sz(x) x.size()
#define f0(i,n) for(int i=0;i<n;i++)
#define f1(i,a,b) for(int i=a;i<=b;i++)
#define f2(i,m,n) for(int i=m;i>=n;i--)
#define faster() ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define endl "\n"
using namespace std;
typedef double ld;
typedef long long ll;
typedef vector<ll> vll;
typedef pair<int,int> II;
int main()
{
  faster();
  int t;
	cin>>t;
	while(t--)
    {
		int n;
		cin >> n;
		int a[n],s = 0;
		map <int,int> b;
		f0(i,n)
        {
			cin >> a[i];
			b[a[i]]++;
			if(b[a[i]] == 2) s += 2;
			else if(b[a[i]] > 2) s++;
		}
		cout << s << endl;
	}
  return 0;
}