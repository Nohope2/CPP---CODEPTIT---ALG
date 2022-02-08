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
  string a;
  cin >> a;
	int n = sz(a);
	f0(i,n)
    {
		if(a[i] >= 'A'&& a[i] <= 'Z') a[i] += 32;
		if(a[i] == 'e'||a[i] == 'u'||a[i] == 'o'||a[i] == 'a'||a[i] == 'i' || a[i] == 'y') continue;
		cout << '.' << a[i];
	}
  return 0;
}