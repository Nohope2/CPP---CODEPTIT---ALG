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
class PhanSo
{
	public:
	long long tu,mau;
	PhanSo(long long a=0,long long b=1)
    {
		tu = a;
		mau = b;
	}
	void rutgon()
    {
		long long k=__gcd(tu,mau);
		tu /= k;
		mau /= k;
	}
	friend istream &operator>>(istream &input,PhanSo &a){
		cin >> a.tu >> a.mau;
		return input;
	}
	friend ostream &operator<<(ostream &output,PhanSo a){
		cout << a.tu << "/" << a.mau;
		return output;
	}
	PhanSo operator + (PhanSo b){
		PhanSo a;
		a.tu = tu*b.mau + mau*b.tu;
		a.mau = mau*b.mau;
		a.rutgon();
		return a;
	}
};
int main() {
	PhanSo p(1,1), q(1,1);
	cin >> p >> q;
	cout << p + q;
	return 0;
}