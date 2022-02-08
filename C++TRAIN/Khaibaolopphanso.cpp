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
	PhanSo(long long a,long long b)
    {
	    tu = a;
		mau = b;
	};   
    void rutgon()
    {
		long long k =__gcd(tu,mau);
        tu /= k;
		mau /= k;
	}
	friend istream &operator>>(istream &input,PhanSo &A)
    { 
        input >> A.tu >> A.mau;
        return input;            
    }
    friend ostream &operator<<(ostream &output,PhanSo &A){ 
        output << A.tu << "/" << A.mau;
        return output;            
    }
};
int main() {
	PhanSo p(1,1);
	cin >> p;
	p.rutgon();
	cout << p;
	return 0;
}