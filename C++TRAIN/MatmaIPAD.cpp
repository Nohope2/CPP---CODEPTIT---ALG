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
	cin >> t;
	while (t--)
	{
		string s1, s2;
		cin >> s1 >> s2;
		string check = "";
		f0(i,sz(s2))
		{
			if (s2[i] >= 'A' && s2[i] <= 'J')
				check.push_back(s2[i] - 17);
			else if (s2[i] >= 'K' && s2[i] <= 'T')
				check.push_back(s2[i] - 27);
		}
		if (check == s1) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
  return 0;
}
