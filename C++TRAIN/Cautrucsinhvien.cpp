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
struct SinhVien
{
	string ten,lop,ns;
	float s;
};
void nhap(struct SinhVien &a)
{
	getline(cin,a.ten);
	cin>>a.lop>>a.ns>>a.s;
}
void in(struct SinhVien a)
{
	if(a.ns[1]=='/') a.ns.insert(0,1,'0');
	if(a.ns[4]=='/') a.ns.insert(3,1,'0');
	cout<<"B20DCCN001 "<<a.ten<<" "<<a.lop<<" "<<a.ns<<" ";
	printf("%.2f",a.s);
}
int main(){
	struct SinhVien A;
    nhap(A);
    in(A);
    return 0;
}