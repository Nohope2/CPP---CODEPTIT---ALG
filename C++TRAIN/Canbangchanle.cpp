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
int cl(int n)
{
	int c = 0,l = 0;
	while(n != 0)
    {
		int k = n%10;
		if(k%2 == 0) c++;
		else l++;
		n /= 10;
	}
	if(c == l) return 1;
	return 0;
}
int main()
{
	faster();
	int n, s = 1,a = 1, b = 10;
	cin >> n;
	f0(i,n-1)
    {
		a *= 10;
		b *= 10;
	}
	b--;
	f1(i,a,b)
    {
		if(cl(i))
        {
			cout << i <<" ";
			s++;
			if(s%10 == 1) cout << endl;
		}
	}
}