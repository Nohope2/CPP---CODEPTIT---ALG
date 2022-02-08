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
struct NhanVien{
	string ten,gt,ns,dc,ms,nk;
};
void nhap(struct NhanVien &a)
{
	getline(cin,a.ten);
	cin>>a.gt>>a.ns;
	cin.ignore();
	getline(cin,a.dc);
	cin>>a.ms>>a.nk;
}
void in(struct NhanVien a){
	cout<<"00001 "<<a.ten<<" "<<" "<<a.gt<<" "<<a.ns<<" "<<a.dc<<" "<<a.ms<<" "<<a.nk;
}
int main(){
	struct NhanVien a;
    nhap(a);
    in(a);
    return 0;
}