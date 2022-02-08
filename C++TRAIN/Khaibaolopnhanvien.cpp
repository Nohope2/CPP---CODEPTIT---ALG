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
#define a() a
class NhanVien{
	public:
	string manv,ten,gt,ns,dc,ms,nk;
	friend istream &operator>>(istream &input,NhanVien &a){
		a.manv="00001";
		getline(cin,a.ten);
		cin>>a.gt>>a.ns;
		cin.ignore();
		getline(cin,a.dc);
		cin>>a.ms>>a.nk;
		return input;
	}
	friend ostream &operator<<(ostream &output,NhanVien a){
		cout<<a.manv<<" "<<a.ten<<" "<<a.gt<<" "<<a.ns<<" "<<a.dc<<" "<<a.ms<<" "<<a.nk<<endl;
		return output;
	}
};
int main(){
    NhanVien a;
    a.nhap();
    a.xuat();
    return 0;
}