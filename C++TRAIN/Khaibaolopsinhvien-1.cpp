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
class SinhVien
{
public:
	string masv,ten,lop,ns;
	float gpa;
    void nhap()
    {
	   getline(cin,ten);
	   cin>>lop>>ns>>gpa;
	   masv="B20DCCN001";
	   if(ns[1]=='/') ns="0" + ns;
	   if(ns[4]=='/') ns.insert(ns.begin()+3,'0');
    }
    void xuat()
    {
	   cout<<masv<<" "<<ten<<" "<<lop<<" "<<ns;
	   printf(" %.2f",gpa);
    }

};

int main()
{
    SinhVien a;
    a.nhap();
    a.xuat();
    return 0;
}